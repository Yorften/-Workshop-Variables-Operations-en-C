#include <stdio.h>
#include <math.h>
int main(){
   char c;
   int i;
   printf("Saisir un caractere :");
   scanf(" %c", &c);
   i = (int)c;
   printf("Le code ASCII est : %d\n",i);
   if(!(i>=65 && i <=90 || i>=97 && i <= 122)){
      printf("Le caractere n\'est pas alphabetique");
    }else if(i>=65 && i <=90) {
        printf("Le caractere est majuscule");
    }else printf("Le caractere est miniscule");
    
   return 0;
}