#include <stdio.h>
#define LENGTH 6

void arr_input(int *);
void arr_print(int *);
int main(){
  int array[LENGTH];
  arr_input(array);
  arr_print(array);
  return 0;
}

void arr_input(int *arr){
  printf("give numbers beb\n");
  int *first = arr;
  while(arr < &first[LENGTH] && scanf("%d", arr++) != 0) {
    arr++;
  }
}

void arr_print(int *arr){
    int *first = arr;
    while(arr < &first[LENGTH]){
    printf("val: %d, addr: %x\n", *arr, arr);
    arr++;
  }
}
