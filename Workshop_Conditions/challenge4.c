#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    float delta,x;
    printf("Saisir les coefficients d'equation : ax^2+bx+c = 0\n");
    scanf("%d%d%d", &a,&b,&c);
    delta= pow(b,2)-(4*a*c);
    if(delta < 0){
        printf("L'equation n'est pas d'une solution reel");
    }else if(delta == 0){
        x = -b/(2*a);
        printf("L'equation accepte une seul solution : %f",x);
    }else printf("L'equation accepte deus solutions : %f et %f",(-b - sqrt(delta))/2*a,(-b + sqrt(delta))/2*a );
    
    return 0;
}   
