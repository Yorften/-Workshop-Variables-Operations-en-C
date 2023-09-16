#include <stdio.h>
int main()
{
  int num,i;

  printf("Saisir un nombre :");
  scanf("%d", &num);

  for (i = 0; i < 11; i++)
  {
    printf(" %d x %d = %d \n",num,i,num*i);
  }
  
    return 0;
}
