#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r,a,b;

    printf("Saisir un entier positif: ");
    scanf("%d",&a);
    b=0;

    while(a>0)
    {
        r=a%10;
        b=10*b+r;
        a=a/10;
    }
    printf("L\'inverse de l\'entier est : %d\n",b);
    
    return 0;
}