#include<stdio.h>
#include<stdlib.h>

float swap(float *a, float *b){
    float temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    float num1,num2;
    printf("Saiasir deux nombres : ");
    scanf("%f%f",&num1,&num2);
    printf("La valeur de 1ere nombre : %f\nLa valeur de 1ere nombre : %f\n",num1,num2);
    swap(&num1,&num2);
    printf("La valeur de 1ere nombre : %f\nLa valeur de 1ere nombre : %f\n",num1,num2);
    return 0;
}