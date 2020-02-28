#include "menu.h"
#include "travel_card.h"
#include "strings.h"
void menu_cycle(){

    // so, print the options in the menu with the chosen language
    // take user input and do action accordingly.

    char user_action;

    do{
        printf("inside the do while loop, but outside for \n");
        for (int i = 0; i < 7; i++){
          printf(strings[languange][i]);
        }
        user_action = getchar();
        getchar();

        switch(user_action){
        case '1': {get_user_info();break;}
        case '2': {break;}
        case '3': {break;}
        case '4': {break;}
        case '5': {change_languange();break;}
        case '6': {break;}
        }

    }while(user_action != '6');
}
