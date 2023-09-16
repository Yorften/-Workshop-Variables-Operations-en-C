#include <stdio.h>
int main()
{
    int i, s=0, j, ligne;
  
    printf("Saisir le nombre de lignes: ");
    scanf("%d",&ligne);
  
    for(i=1; i<=ligne; ++i, s=0)
    {
        for(j=1; j<=ligne-i; ++j)
        {
            printf("  ");
        }
        while(s != 2*i-1)
        {
            printf("* ");
            ++s;
        }
        printf("\n");
    }
    
    return 0;
}