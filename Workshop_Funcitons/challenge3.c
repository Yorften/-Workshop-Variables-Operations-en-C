#include <stdio.h>

int pgcd(int a,int b){
  if( b != 0) {
    pgcd( b, a%b);
  }else return a;
}

int main()
{
    int num1,num2;
    printf("Entrez deux entiers : \n");
    scanf("%d %d", &num1,&num2);
    printf("Le pgcd de deux nombres est : %d", pgcd(num1,num2));
    return 0;
}
