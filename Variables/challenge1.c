#include <stdio.h>
int main(){
    char Name[20], lastName[20], Sex;
    int Age, phoneNum;
    printf("Votre Nom:");
    scanf("%s",&Name[20]);
    printf("Votre Prenom:");
    scanf("%s",&lastName[20]);
    printf("Votre Sexe (M/F):");
    scanf(" %c",&Sex);
    printf("Votre Age:");
    scanf("%d",&Age);
    printf("Votre Numero telephone:");
    scanf("%d",&phoneNum);
    printf("Nom complet : %s %s\nSexe: %c\nAge: %d\nNumero telephone: %d",Name,lastName,Sex,Age,phoneNum);
    return 0;
}
