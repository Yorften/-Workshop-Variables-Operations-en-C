#include <stdio.h>
int main(){
    char caract;
    printf("Saisir une caractere :");
    scanf("%c",&caract);
    switch (caract)
    {
    case 'a': case 'e': case 'i': case 'o': case 'u': case 'y':
    case 'A': case 'E': case 'I': case 'O': case 'U': case 'Y':

        printf("Le caractere est une voyelle");
        break;
    default:
    printf("Le caractere n'est pas d'une voyelle");
        break;
    }

    return 0;
}
