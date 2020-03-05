#include "travel_card.h"
#include "menu.h"
#include "strings.h"

int  main(int argc, char **argv){

  if(argv[1] == NULL){
    printf("ERROR: no languange given \n");
    return 1;
  }
  languange = (strcmp(argv[1], "english") == 0) ? 0 : 1;
  p = create_prices(2.5, 3.8);
  c = create_card(12.0, "Elias Koivula");
  stamp = create_stamper(travel_func);
//  printf("card created and holds %.2f euros\n",c.cur_money); 
  stamp.travelling_function(&c, p.outer, &stamp);
//  printf("cur money is %.2f \n", c.cur_money);
//  print_last_stamping_info(&stamp);
  menu_cycle();
  return 0;
}

void travel_func(struct card *c, double price, struct stamper *stamp){
  if(c->cur_money > price){
    printf("card being used, cost: %.2f \n", price);
    c->cur_money = c->cur_money - price;
    stamp->time_info = get_timestamp();
    stamp->stamps[stamp->amount_of_stamps] = c;
    stamp->amount_of_stamps += 1;
  }else{
    printf(strings[languange][15]);
  }
}

void print_last_stamping_info(struct stamper *s){
  printf(strings[languange][11], s->stamps[s->amount_of_stamps-1]->name);
  printf(strings[languange][12], s->time_info->tm_mday, s->time_info->tm_mon +1, s->time_info->tm_year + 1900, s->time_info->tm_hour, s->time_info->tm_min, s->time_info->tm_sec);
  printf(strings[languange][13], s->stamps[s->amount_of_stamps-1]->cur_money);
}

void get_user_info(){
 printf(strings[languange][7]);
 fgets(name, 50, stdin);
 printf(strings[languange][8]);
 scanf("%lf", &start_money);
 printf("starting money %f", start_money);
 c = create_card(start_money, name);
}

void change_languange(){
  languange = (languange == 0) ? 1 : 0;
}

void init_travel(){
  printf(strings[languange][9]);
  switch(getchar()){
  case '1' : {travel_func(&c,p.inner,&stamp);break;} 
  case '2' : {travel_func(&c,p.outer,&stamp);break;}
  default: printf("error: invalid input \n");
  }
}

void insert_money(){
  printf(strings[languange][8]);
  scanf("%lf", &start_money);
  c.cur_money += start_money;
}

struct card create_card(double money, char name[25]){
  struct card temp;
  strcpy(temp.name, name);
  temp.cur_money = money;
  return temp;
};

struct price create_prices(double inner, double outer){
  struct price temp;
  temp.inner = inner;
  temp.outer = outer;
  return temp;
};

struct stamper create_stamper(void(*func)(struct card*, double, struct stamper*)){
  struct stamper temp;
  temp.amount_of_stamps = 0;
  temp.travelling_function = func;
  return temp;
};

struct tm* get_timestamp(){
  time_t t;
  time(&t);
  struct tm *temp = localtime(&t);
  return temp;
};
