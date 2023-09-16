#include<stdio.h>
 
int isPerfect( int n){
    int i;
    int somme = 0;
    for(i = 1; i < n; ++i){
    if(n%i == 0){
      somme = somme + i;
    }
  }
  if(somme == n){
    return 0;
  }else return 1;
}

int main(){
  
  int somme=0, num, i;
  
  printf(" Entrez un nombre: ");
  scanf("%d",&num);
  (isPerfect(num) == 0) ?  printf(" Nombre parfait") : printf(" n'est pas un Nombre parfait");
  return 0;
}