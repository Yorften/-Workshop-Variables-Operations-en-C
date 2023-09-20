#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct Date {
    int j,m,a;
};
typedef struct tache {
    int id;
    char title[100];
    char desc[500];
    struct Date date;
    char status[11];
}tache;

int tach_comp = 0;
tache T[100];

int syntaxDate(tache *T,int i){
    time_t seconds=time(NULL);
    struct tm* current_time=localtime(&seconds); 
    int currentYear = (current_time->tm_year + 1900);
    int currentMonth =(current_time->tm_mon + 1);
    int currentDay =current_time->tm_mday;

    if (T[i].date.a > currentYear) goto check;

    if(T[i].date.a < currentYear){
        printf("Entree invalide. Veuillez saisir une annee valide (%d - ...).\n",currentYear);
        while (getchar() != '\n');
        return 1;
    }else if(T[i].date.a = currentYear){
        if(T[i].date.m > currentMonth){   
            goto check; 
        }else if(T[i].date.m < currentMonth){
            printf("Entree invalide. Veuillez saisir un mois valide .\n");
            while (getchar() != '\n');
            return 1;
        }else if(T[i].date.m = currentMonth){
            if(T[i].date.j <= currentDay){
            printf("Entree invalide. Veuillez saisir un jour valide .\n");
            while (getchar() != '\n');
            return 1;
            }           
    }
check:
    switch ((char)T[i].date.m){
    case 2: 
        if(T[i].date.j >= 29 || T[i].date.j <= 0){
            printf("Entree invalide. Veuillez saisir un jour valid (1-28).\n");
            while (getchar() != '\n');
            return 1;}else return 0;
        break;
    case 4:  case 6:  case 9:  case 11:
        if(T[i].date.j >= 31 || T[i].date.j <= 0){
            printf("Entree invalide. Veuillez saisir un jour valid (1-30).\n");
            while (getchar() != '\n');
        return 1;}else return 0;
        break;
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        if(T[i].date.j >= 32 || T[i].date.j <= 0){
            printf("Entree invalide. Veuillez saisir un jour valid (1-31).\n");
            while (getchar() != '\n');
        return 1;}else return 0;
        break;
    default:
        printf("Mois invalide. Veuillez saisir un mois valid (1-12).\n");
        while (getchar() != '\n');
        return 1;
        break;
    }
}}

void addTask(void){
int i,n,p,choice2;
input:
                    printf("Combien des taches vous souhaitez ajouter : ");
                            if ( scanf("%d", &n) != 1) {
                            printf("Entree invalide. Veuillez saisir un entier valide.\n");
                                 // Clear the input buffer
                             while (getchar() != '\n');
                             goto input;
                            }
                            p = n + tach_comp;
                            for (i = tach_comp; i < p ; i++){
                                getchar();
                                printf("\nSaisir les informations du tache n%d \n", i+1);
                                T[i].id=i+1;
                                printf("Titre : ");
                                fgets(T[i].title,100,stdin);
                                T[i].title[strcspn(T[i].title,"\n")]=0;
                                printf("Description : ");
                                fgets(T[i].desc,100,stdin);
                                T[i].desc[strcspn(T[i].desc,"\n")]=0;
                                date:
                                printf("Date limite (ex: 11/03/2024) : ");
                                if (scanf("%d/%d/%d", &T[i].date.j, &T[i].date.m, &T[i].date.a) != 3){
                                    printf("Format d\'entree invalide. Veuillez utiliser le format jj/mm/aaaa.\n");
                                    while (getchar() != '\n');
                                    goto date; // Exit with an error code
                                }
                                if(syntaxDate(T,i)) goto date;
                                strcpy(T[i].status,"En cours");
                                tach_comp++;
                            }
}

void showTask(tache *T){
        printf("\t\t+--------------------------------------------------------------+\n");
        printf("\t\t| Id |    Tache     |  Description | Date limite |    Status   |\n");
        printf("\t\t+--------------------------------------------------------------+\n");
    int i;
    for (i = 0; i < tach_comp; i++)
    {
        printf("\t\t| %-2d | %-12s | %-12s | %2d-%2d-%4d  | %-11s |\n",T[i].id,T[i].title,T[i].desc,T[i].date.j,T[i].date.m,T[i].date.a,T[i].status);
    }
        printf("\t\t+--------------------------------------------------------------+\n");
}

void triAlpha(tache *T){
    int i,j;
    tache temp;
    tache F[100];
    for (i = 0; i < 100; i++)
    {
        F[i]=T[i];
    }
    
    for(i=0;i<tach_comp;i++){
        for(j=i+1;j<tach_comp;j++){
      if(strcmp(F[i].title,F[j].title)>0){
        temp=F[i];
        F[i]=F[j];
        F[j]= temp;
      }
   }
}   
printf("\t\tLes taches triees par titre: \n");
showTask(F);
}

void triDate(tache *T){
    int i,j;
    tache temp;
    tache R[100];
    for (i = 0; i < 100; i++)
    {
        R[i]=T[i];
    }
    for(i=0;i<tach_comp;i++){
        for(j=i+1;j<tach_comp;j++){

      if(R[i].date.a>R[j].date.a){
        temp=R[i];
        R[i]=R[j];
        R[j]= temp;
        break;
      }else if(R[i].date.a=R[j].date.a){
        if(R[i].date.m>R[j].date.m){
            temp=R[i];
            R[i]=R[j];
            R[j]= temp;
            break;
        }else if(R[i].date.m=R[j].date.m){
            if(R[i].date.j>R[j].date.j){
                temp=R[i];
                R[i]=R[j];
                R[j]= temp;
                break;
            }else if (R[i].date.j=R[j].date.j){
                if(R[i].id > R[j].id){
                    temp=R[i];
                    R[i]=R[j];
                    R[j]= temp;
                    break;
                }
            }
        }
      }
   }
}
printf("\t\tLes taches triees par deadline : \n");
showTask(R);
}

void tasksDeadline(){
    int i;
    int c=0;
    time_t seconds=time(NULL);
    struct tm* current_time=localtime(&seconds); 
    int currentYear = (current_time->tm_year + 1900);
    int currentMonth =(current_time->tm_mon + 1);
    int currentDay =current_time->tm_mday;

    for (i = 0; i < tach_comp; i++)
    {
        if(T[i].date.a != currentYear){
            continue;
        }else if (T[i].date.m != currentMonth){
            continue;
        }else if(T[i].date.j - currentDay <= 3){
            printf("\t\t+----------------------------------------+\n");
            printf("\t\t|Id : %-34d |\n",T[i].id);
            printf("\t\t|Tache : %-31s |\n", T[i].title);
            printf("\t\t|Description: %-26s |\n", T[i].desc);
            printf("\t\t|Deadline: %-02d/%02d/%-23d |\n", T[i].date.j, T[i].date.m, T[i].date.a);
            printf("\t\t|Days until deadline: %-18ld |\n", T[i].date.j - currentDay);
            printf("\t\t+----------------------------------------+\n");
            c++;
        }
    }
    if(c=0) printf("Il n\'y a pas des taches qu'on 3 jours ou mins do delai.\n");
    
}

void tasksNumber(tache *T){
    int i,num;
    for (i = 0; i < tach_comp; i++)
    {
        num++;
    }
    printf("Le nombre total des taches : %d\n", num);
}

void completedTasks(tache *T){
    int complete = 0;
    int incomplete = 0;
    int i;
    for ( i = 0; i < tach_comp; i++)
    {
        if(strcmp(T[i].status,"En cours")==0){
            incomplete++;
        }else complete++;
    }
    printf("Le nombre des taches complets : %d\n",complete);
    printf("Le nombre des taches incomplets : %d\n",incomplete);

}

void showTasksDeadline(tache *T){
    int i,delai,days;
    time_t seconds=time(NULL);
    struct tm* current_time=localtime(&seconds); 
    int currentYear = (current_time->tm_year + 1900);
    int currentMonth =(current_time->tm_mon + 1);
    int currentDay =current_time->tm_mday;
    printf("\t\t+---------------------------------------------------+\n");
    for (i = 0; i < tach_comp; i++)
    {
        days = T[i].date.a*365+T[i].date.m*30+T[i].date.j;
        delai = days-(currentYear*365+currentMonth*30+currentDay); 
        
        printf("\t\t| Id : %2d | Titre : %-17s | Delai : %3d |\n",T[i].id,T[i].title,delai);
        printf("\t\t+---------------------------------------------------+\n");
    }
    
}

int taskMenu(){
int choice;
menu :
            printf("\t\t+----------------------------------------+\n");
            printf("\t\t|            MENU DES TACHES             |\n");
            printf("\t\t+----------------------------------------+\n");
            printf("\t\t|                                        |\n");
            printf("\t\t|     1- Afficher les taches             |\n");
            printf("\t\t|     2- Tri alphabetique                |\n");
            printf("\t\t|     3- Tri par deadline                |\n");
            printf("\t\t|     4- Taches expirant bientot         |\n");
            printf("\t\t|     5- Menu precedent                  |\n");
            printf("\t\t|                                        |\n");
            printf("\t\t+----------------------------------------+\n");

saisir:
                        printf("\n\tChoix :");
                        if ( scanf("%d", &choice) != 1) 
                        {
                            printf("Entree invalide. Veuillez saisir un entier valide.\n");
                                 // Clear the input buffer
                             while (getchar() != '\n');
                             goto saisir;
                         }
                        if (choice <= 0 || choice >= 6)
                        {
                            printf("Choix invalide. Veuillez saisir une option valide (1-4).\n");
                            goto saisir;
                        }
                        switch (choice)
                        {
                        case 1:
                            showTask(T);
                            system("pause");
                            break;
                        case 2:    
                            triAlpha(T);
                            system("pause");
                            break;
                        case 3:
                            triDate(T);
                            system("pause");
                            break;
                        case 4:
                            tasksDeadline();
                            system("pause");
                            break;
                        case 5:
                            return 0;
                            break;
                        }
    goto menu;
}

/*int managementMenu(){
int choice;
menu :
            printf("\t\t+----------------------------------------+\n");
            printf("\t\t|            MENU DES TACHES             |\n");
            printf("\t\t+----------------------------------------+\n");
            printf("\t\t|                                        |\n");
            printf("\t\t|     1- Afficher les taches             |\n");
            printf("\t\t|     2- Tri alphabetique                |\n");
            printf("\t\t|     3- Tri par deadline                |\n");
            printf("\t\t|     4- Taches expirant bientot         |\n");
            printf("\t\t|     5- Menu precedent                  |\n");
            printf("\t\t|                                        |\n");
            printf("\t\t+----------------------------------------+\n");

saisir:
                        printf("\n\tChoix :");
                        if ( scanf("%d", &choice) != 1) 
                        {
                            printf("Entree invalide. Veuillez saisir un entier valide.\n");
                                 // Clear the input buffer
                             while (getchar() != '\n');
                             goto saisir;
                         }
                        if (choice <= 0 || choice >= 6)
                        {
                            printf("Choix invalide. Veuillez saisir une option valide (1-4).\n");
                            goto saisir;
                        }
                        switch (choice)
                        {
                        case 1:
                            showTask(T);
                            system("pause");
                            break;
                        case 2:    
                            triAlpha(T);
                            system("pause");
                            break;
                        case 3:
                            triDate(T);
                            system("pause");
                            break;
                        case 4:
                            tasksDeadline();
                            system("pause");
                            break;
                        case 5:
                            return 0;
                            break;
                        }
    goto menu;
}*/

int statsMenu(){
int choice;
menu :
            printf("\t\t+----------------------------------------+\n");
            printf("\t\t|              Statistiques              |\n");
            printf("\t\t+----------------------------------------+\n");
            printf("\t\t|                                        |\n");
            printf("\t\t|     1- Le nombre total des taches      |\n");
            printf("\t\t|     2- Nombre des taches(compl/incompl)|\n");
            printf("\t\t|     3- Le delai des taches             |\n");
            printf("\t\t|     4- Menu precedent                  |\n");
            printf("\t\t|                                        |\n");
            printf("\t\t+----------------------------------------+\n");

saisir:
                        printf("\n\tChoix :");
                        if ( scanf("%d", &choice) != 1) 
                        {
                            printf("Entree invalide. Veuillez saisir un entier valide.\n");
                                 // Clear the input buffer
                             while (getchar() != '\n');
                             goto saisir;
                         }
                        if (choice <= 0 || choice >= 5)
                        {
                            printf("Choix invalide. Veuillez saisir une option valide (1-4).\n");
                            goto saisir;
                        }
                        switch (choice)
                        {
                        case 1:
                            tasksNumber(T);
                            system("pause");
                            break;
                        case 2:    
                            completedTasks(T);
                            system("pause");
                            break;
                        case 3:
                            showTasksDeadline(T);
                            system("pause");
                            break;
                        case 4:
                            return 0;
                            break;
                        }
    goto menu;
}
