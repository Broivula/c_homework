#include <stdio.h>
#include <time.h>
#include <string.h>

struct price {
    double inner;
    double outer;
};

struct card{
  double cur_money;
  char name[25];
};

struct stamper{
  struct card* stamps[10];
  int amount_of_stamps;
  struct tm* time_info;
  void (*travelling_function)();
};

struct tm* get_timestamp(){
  time_t t;
  time(&t);
  struct tm *temp = localtime(&t);
  return temp;
};

struct stamper create_stamper(void(*func)(struct card*, double, struct stamper*)){
  struct stamper temp;
  temp.amount_of_stamps = 0;
  temp.travelling_function = func;
  return temp;
};

struct price create_prices(double inner, double outer){
  struct price temp;
  temp.inner = inner;
  temp.outer = outer;
  return temp;
};

struct card create_card(double money, char name[25]){
  struct card temp;
  strcpy(temp.name, name);
  temp.cur_money = money;
  return temp;
};

void print_last_stamping_info(struct stamper *s){
  printf("last stamper was: %s \n", s->stamps[s->amount_of_stamps-1]->name);
  printf("last stamp is %02d-%02d-%d %02d:%02d:%02d \n", s->time_info->tm_mday, s->time_info->tm_mon +1, s->time_info->tm_year + 1900, s->time_info->tm_hour, s->time_info->tm_min, s->time_info->tm_sec);
}

void travel_func(struct card *c, double price, struct stamper *stamp){
  printf("card being used, cost: %.2f \n", price);
  c->cur_money = c->cur_money - price;
  stamp->time_info = get_timestamp();
  stamp->stamps[stamp->amount_of_stamps] = c;
  stamp->amount_of_stamps += 1;
}

int  main(){
  struct card c;
  struct price p;
  struct stamper stamp;
  p = create_prices(2.5, 3.8);
  c = create_card(12.0, "Elias Koivula");
  stamp = create_stamper(travel_func);
  printf("card created and holds %.2f euros\n",c.cur_money); 
  stamp.travelling_function(&c, p.outer, &stamp);
  printf("cur money is %.2f \n", c.cur_money);
  print_last_stamping_info(&stamp);
  return 0;
}
