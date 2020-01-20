#include <stdio.h>
#include <string.h>
#include <ctype.h>

void print_menu();
void inline_text();
void ask_word();

char word [25];

int main (){
    print_menu();
    return 0;
}

void reverse_word(int option){
    char x, y;
    int *px, *py;
    if(strlen(word) <= 0){               /* if the word is not assigned */
        printf("assign a word first! \n");
        return;
    }

    for (int i = 0; i < sizeof(word); i++){
        if((strlen(word) - 1) - i < i)  /* to make sure pointers won't overlap */
            break;

        px = &word[i];
        x = *px;
        py = &word[(strlen(word) - 1) - i];
        y = *py;
        if(option == 0){                 /* if it's the regular reversal */
             word[i] = y;
             word[(strlen(word) - 1) - i] = x;
        }else{
             word[i] = toupper(y);
             word[(strlen(word) - 1) - i] = toupper(x);
            
        }
    }
    printf("word reversed: %s \n", word);
    return;
}


void print_menu (){
    char c;
    do{
        printf("\n--------------- String manipulation ------------------\n");
        inline_text();
        printf("Assign a word - 1 \n");
        inline_text();
        printf("Normal reversal - 2 \n");
        inline_text();
        printf("Uppercase reversal - 3 \n");
        inline_text();
        printf("Quit - 4 \n");
        
        c = getchar();
        getchar();

        switch(c){
            case '1': { ask_word(); break; } 
            case '2': { reverse_word(0); break; }
            case '3': { reverse_word(1); break; }
        }

    }while(c != '4');
    return;
}

void ask_word(){ 
    printf("hey, give me a word (less than 25 chars)\n");
    fgets(word, 25, stdin); 
}

void inline_text (){
    printf("\t\t");
}
