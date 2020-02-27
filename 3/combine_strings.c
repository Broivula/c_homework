#include <stdio.h>
#include <stdlib.h>
void conc_str(char*, char*, char*);

int main(){
    char s1[20], s2[20], comb[50];

    printf("hey, give me two strings \n");
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    conc_str(s1, s2, comb);
    printf("%s\n", comb);
 
    return 0;

}

void conc_str(char *c1, char *c2, char *comb){
  for(;*c1 != '\0'; c1++){
      if(*c1 == '\n') break;
    *comb = *c1;
    *(++comb) = '\0';
  }

  for(;*c2 != '\0'; c2++){
    if(*c2 == '\n')break;
    *comb = *c2;
    *(++comb) = '\0';
  }
}
