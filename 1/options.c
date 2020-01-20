#include <stdio.h>


char name[25];
int age;

int main(){
	print_menu();
	return 0;
}

void inline_text(){
	printf("\t\t");
    return;
}

void ask_name(){
    printf("Hey, give me your name \n");
    fgets(name, 25,stdin);
}
void ask_age(){
    printf("How old are you? \n");
    scanf("%5d", &age);
    getchar();
}



void print_name(){
    printf("your name is %s", name);
}
void print_age(){
    printf("your age is %d", age);
}


void print_menu(){
	char choice;

	do{
		printf("\n-------------------IO-Testing-------------------\n");
		inline_text();
		printf("Ask name - 1 \n");
		inline_text();
		printf("Ask age - 2 \n");
	    inline_text();
        printf("Print name - 3 \n");
        inline_text();
        printf("Print age - 4 \n");
        inline_text();
        printf("Quit - 5 \n");
		choice = getchar();
        getchar();
        
        switch(choice){
        case '1':   { ask_name(); break; }        
        case '2':   { ask_age(); break; }        
        case '3':   { print_name(); break; }        
        case '4':   { print_age(); break; }        
            }

	}while(choice != '5');
    return;
}
