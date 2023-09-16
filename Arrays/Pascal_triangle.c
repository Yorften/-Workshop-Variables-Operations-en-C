#include <stdio.h>
#include <math.h>

long fact(int n)  
{  
  if (n == 0)  
    return 1;  
  else  
    return(n * fact(n-1));  
}  

long Cnk(int n,int k){
    return fact(n)/(fact(k)*fact(n-k));
}

int main()
{
    int i, j, ligne;
    
    printf("Saisir le nombre de lignes: ");
    scanf("%d",&ligne);
  
    for(i=0; i<=ligne-1; ++i)
    {
        for (j = 1; j <= (ligne - i); j++)
        {
           printf(" ");
        }
        
        for(j=0; j<=i; ++j)
        {
            printf("%ld ",Cnk(i,j));
        }
        printf("\n");
    }
    
    return 0;
}