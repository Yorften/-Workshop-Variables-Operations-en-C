#include <stdio.h>

int main(){
    float num;
    printf("Saisir un nomre reel :");
    scanf("%f", &num);
    if (num>0)
    {
        printf("Le nombre est positive.");
    }else if (num<0)
    {
        printf("Le nombre est negative.");
    }else printf("Le nombre est null.");
    
    

    return 0;
}