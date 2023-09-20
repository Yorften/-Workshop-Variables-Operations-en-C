#include <stdio.h>
#include <string.h>
#include <stdlib.h>



struct Date {
 int j,m,a;
};
struct apprenants {
    char nom[100];
    char prenom[100];
    struct Date date;
};
struct apprenants T[100];
int student_id = 0;

void addStudent(void){
int i,n,p;
int comp = 0;
                    printf("Combien d\'etudiants vous souhaitez ajouter : ");
                            scanf("%d",&n);
                            p = n + student_id;
                            for (i = student_id; i < p ; i++)
                            {
                                getchar();
                                printf("\nSaisir les informations d\'apprenant n%d \n", i+1);
                                printf("Nom : ");
                                fgets(T[i].nom,100,stdin);
                                T[i].nom[strcspn(T[i].nom,"\n")]=0;
                                printf("Prenom : ");
                                fgets(T[i].prenom,100,stdin);
                                T[i].prenom[strcspn(T[i].prenom,"\n")]=0;
                                printf("Date de naissance (ex: 11/03/2001) : ");
                                scanf("%d/%d/%d",&T[i].date.j,&T[i].date.m,&T[i].date.a);
                                student_id++;
                            }
                            comp++;

}

void afficherStudent(void){
    int i;
    for (i = 0; i < student_id; i++)
    {
        printf("\t\t| %12s | %10s | %2d-%2d-%4d |\n",T[i].nom,T[i].prenom,T[i].date.j,T[i].date.m,T[i].date.a);
    }
    


    
}

void menuStudent(){

            printf("\t\t+----------------------------------------+\n");
            printf("\t\t|             Menu Etudiants               |\n");
            printf("\t\t+----------------------------------------+\n");
            printf("\t\t|                                        |\n");
            printf("\t\t|     1- Afficher L\'etudiants           |\n");
            printf("\t\t|     2- Afficher             |\n");
            printf("\t\t|     3- Statistiques                    |\n");
            printf("\t\t|     4- Quittez                         |\n");
            printf("\t\t+----------------------------------------+\n");

}

int main(){
        int c,n,i;
        struct apprenants T[100];
menu :
            printf("\t\t+----------------------------------------+\n");
            printf("\t\t|             Menu Gestion               |\n");
            printf("\t\t+----------------------------------------+\n");
            printf("\t\t|                                        |\n");
            printf("\t\t|     1- Ajouter Etudiant(s)             |\n");
            printf("\t\t|     2- Afficher Etudiant(s)            |\n");
            printf("\t\t|     3- Statistiques                    |\n");
            printf("\t\t|     4- Quittez                         |\n");
            printf("\t\t+----------------------------------------+\n");

                    saisir:
                    
                        printf("Choix :");
                        scanf("%d", &c);
                     if (c <= 0 || c >= 5 ) goto saisir;

                        switch (c)
                        {
                        case 1:
                            addStudent();
                            system("pause");
                            break;
                        case 2:    
                            afficherStudent();
                            system("pause");
                            break;
                        case 3:
                            system("pause");
                            break;
                        case 4:
                            exit(0);
                            break;
                        
                        }
    goto menu;
    return 0;
}

