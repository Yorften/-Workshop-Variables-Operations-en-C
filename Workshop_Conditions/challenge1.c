#include <stdio.h>
int main(){
  int num,i;
  printf("Saisir un nombre :");
  scanf("%d", &num);
  if(num % 2 == 0){
    printf("Le nombre est pair");
  }else printf("Le nombre est impair");
    return 0;
}
