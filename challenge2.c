#include <stdio.h>
void main(){
    float tempF,tempC;
    printf("Saisir la temperature Fahrenheit :");
    scanf("%f",&tempF);
    tempC= (tempF-32)/1.8;
    printf("La temperature en Celsius est : %f",tempC);
}
