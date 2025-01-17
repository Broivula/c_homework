#include <stdio.h>
#include <time.h>
#include <string.h>

unsigned int languange;
struct card c;
struct price p;
struct stamper stamp;
char name[50];
double start_money;



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

struct tm* get_timestamp();

struct stamper create_stamper(void(*func)(struct card*, double, struct stamper*));

struct price create_prices(double inner, double outer);

struct card create_card(double money, char name[25]);

void print_last_stamping_info(struct stamper *s);

void init_travel();

void travel_func(struct card *c, double price, struct stamper *stamp);

void get_user_info();

void insert_money();

void change_languange();
