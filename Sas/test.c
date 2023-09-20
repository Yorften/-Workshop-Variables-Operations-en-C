if (scanf("%d/%d/%d", &inputDate.day, &inputDate.month, &inputDate.year) != 3) {
        printf("Invalid input format. Please use dd/mm/yyyy format.\n");
        return 1; // Exit with an error code
    }