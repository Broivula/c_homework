#include "menu.h"
#include "travel_card.h"
#include "strings.h"
void menu_cycle(){

    // so, print the options in the menu with the chosen language
    // take user input and do action accordingly.

unsigned int exit_int = 0;
char user_action[5];
  do{
        for (int i = 0; i < 7; i++){
          printf(strings[languange][i]);
        }

        fgets(user_action, 5, stdin);
        switch(user_action[0]){
        case '1': {get_user_info();break;}
        case '2': {break;}
        case '3': {init_travel();break;}
        case '4': {print_last_stamping_info(&stamp);break;}
        case '5': {change_languange();break;}
        case '6': {exit_int = 1;break;}
        }

    }while(exit_int == 0);
}
