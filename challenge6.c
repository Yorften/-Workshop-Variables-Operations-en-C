#include <stdio.h>
#define PI (3.141592653589793) ;
int main(){
    float radius,circonf;
    printf(("Saisir le rayon de cercle :"));
    scanf("%f",&radius);
    circonf=radius*2*PI;
    printf("Le circonférence de cercle est : %f",circonf);
}