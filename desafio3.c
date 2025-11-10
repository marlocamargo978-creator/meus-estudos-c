//Contador de pares.
#include<stdio.h>
int main(){
    printf("Imprimindo os números pares de 1 a 50.\n");
    for(int i = 1; i <= 50; i++){
      if(i % 2 != 0){
        continue;
      }  
      printf("%d\n", i);
    }
    printf("\nFIM!!!\n");

    return 0;
}