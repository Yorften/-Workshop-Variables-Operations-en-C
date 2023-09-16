#include <stdio.h>
#include <math.h>

float equacarre(int a,int b, int c){
    float delta;
    delta= pow(b,2)-(4*a*c);
    if(delta < 0){
        printf("L'equation n'est pas d'une solution reel");
    }else if(delta == 0){
        return -b/(2*a);
    }else if ((-b - sqrt(delta))/2*a > 0 )
    {
        return (-b - sqrt(delta))/2*a;
    }else if ((-b + sqrt(delta))/2*a > 0) return (-b + sqrt(delta))/2*a;
}

int main(){
    int a,b,c;
    float x;
    printf("Saisir les coefficients d'equation : ax^4+bx^2+c = 0\n");
    scanf("%d%d%d", &a,&b,&c);
    printf("La solution est : X1=%f  X2=%f",sqrt(equacarre(a,b,c)),-sqrt(equacarre(a,b,c)));
    return 0;
}   