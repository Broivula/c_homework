#include <strings.h>

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
