#include "menu.h"
#include "travel_card.h"
#include "strings.h"
void menu_cycle(){

    // so, print the options in the menu with the chosen language
    // take user input and do action accordingly.

    char user_action;

    for (int i = 0; i < 6; i++){
      printf(strings[languange][i]);
    }


}
