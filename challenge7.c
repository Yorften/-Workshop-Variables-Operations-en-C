#include <stdio.h>
int main(){
    int number;
    char inverse[3];
    printf("Saisir un chiffre a trois nombres :");
    scanf("%d",&number);
    itoa(number,inverse,10);
    printf("%c%c%c",inverse[2],inverse[1],inverse[0]);
}
