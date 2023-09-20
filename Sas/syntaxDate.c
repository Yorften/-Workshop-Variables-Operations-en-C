int syntaxDate(tache *T,int i){
     time_t seconds=time(NULL);
    struct tm* current_time=localtime(&seconds); 
    int currentYear = (current_time->tm_year + 1900);
    int currentMonth =(current_time->tm_mon + 1);
    int currentDay =current_time->tm_mday;
    if(T[i].date.a < currentYear){
        printf("Entree invalide. Veuillez saisir une annee valide (%d - ...).\n", currentYear);
        while (getchar() != '\n');
        return 1;
    }
    switch (T[i].date.m){
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
        
    }