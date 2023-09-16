#include <stdio.h>
#include <ctype.h>

int main(){
   char verify; 
   float annee;
   int i;
   printf("Saisir combien d\'annees voulez-vous convertir :   ");
   scanf("%f",&annee);
do
{
    printf("Saisir le nombre correspendant pout convertir :\n\t1- Mois\n\t2- Jours\n\t3- Hours\n\t4- Minutes\n\t5- Seconds\n\t6- Quittez\nVotre choix : ");
    scanf("%d",&i);
    switch (i)
    {
    case 1:
       printf("%.0f annee(s) a %.0f mois\n\n\n\n\n",annee,annee*12);
        break;
    case 2:
       printf("%.0f annee(s) a %f jours\n\n\n\n\n",annee, annee*365.25);
        break;
    case 3:
       printf("%.0f annee(s) a %.0f heurs\n\n\n\n\n",annee,  annee*8768);
        break;
    case 4:
       printf("%.0f annee(s) a %.0f minutes\n\n\n\n\n",annee,annee*526080);
        break;
    case 5:
       printf("%.0f annee(s) a %.0f seconds\n\n\n\n\n",annee,annee*31557600);
        break;
    default:
        break;
    }
} while (i <= 5);

}
