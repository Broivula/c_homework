#include <stdio.h>
#include <time.h>
#include <string.h>

int languange = 0;
char strings[2][30][100] = {
    // english
    {
        {"\t\t---------- MENU ----------\n\n"},
        {"1) create a card\n"},
        {"2) insert money into card \n"},
        {"3) travel \n"},
        {"4) print last travel data\n"},
        {"5) quit \n"},
        {"give me a name\n"},
        {"and amount of money?\n"},
        {"travel inner (1) or outer (2)?\n"},
        {"travel complete!\n"},
        {"last traveller was: %s\n"},
        {"last stamp was: %02d-%02d-%d %02d:%02d:%02d\n"},
        {"money left in travellers card: %.2f \n"},
        {"incorrect entry, try again \n"}

    },
    // finnish
    {
      {"\t\t---------- VALIKKO ----------\n\n"},
      {"1) luo kortti \n"},
      {"2) pistä rahaa kortille \n"},
      {"3) matkusta \n"},
      {"4) tulosta viimeisin matkustusdata\n"},
      {"5) poistu\n"},
      {"anna minulle nimi\n"},
      {"ja rahasumma? \n"},
      {"matkusta sisäistä (1) vai ulkoista (2)?\n"},
      {"matka valmis!\n"},
      {"viimeisin matkustaja oli: %s\n"},
      {"viimeisin leima oli: %02d-%02d-%d %02d:%02d:%02d\n"},
      {"rahaa matkaajan kortissa jäljellä: %.2f\n"},
      {"virhe, yritä uudestaan \n"}
    }
};

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

void travel_func(struct card *c, double price, struct stamper *stamp);

