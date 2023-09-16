#include <stdio.h>
#include<stdlib.h>
int Max_2(int a, int b){
    if ( a > b) {
        return a;
    }else return b;
}
int Max_4(int a,int b, int c, int d){
    Max_2(Max_2(a,b),Max_2(c,d));
}

int main()
{
    int num1,num2,num3,num4;
    printf("Saisir quatre nombres entier : \n");
    scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
    printf("Le plus grand nombre est : %d",Max_4(num1,num2,num3,num4));
    return 0;
}
