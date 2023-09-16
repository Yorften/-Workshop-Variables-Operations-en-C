#include <stdio.h>

int Somme(int a,int b){
    return a+b;
}

int main()
{
    int num1,num2;
    printf("Saisir deux nombres entier: \n");
    scanf("%d %d",&num1,&num2);
    printf("La somme est : %d",Somme(num1,num2));
    
    
    return 0;
}