#include <stdio.h>
#include<stdlib.h>
int main()
{
    int som,max,a;
    som=0;
    max=0;
    a=1;
    printf("Saisir une serie d'entiers, pour finir entrez 0.\n");

    while(a!=0)
    {
       do{
            scanf("%d",&a);
            if(a>100) printf("Saisir un entier inferieur ou egal a 100\n");
       }while(a>100);
       som+=a;
       if(a>max) max=a;
    }
    printf("La somme: %d\n",som);
    printf("Le max: %d\n",max);
    
    return 0;
}
