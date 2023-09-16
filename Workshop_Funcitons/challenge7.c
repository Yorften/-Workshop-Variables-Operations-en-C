#include <stdio.h>

int isPrime(int n){
    int i;
    int flag = 0;
    if (n == 0 || n == 1)
    flag = 1;

  for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  if (flag == 0)
    return 0;
  else
    return 1;

}

int main()
{
    int num, i, flag = 0;

  printf("Saisir un nombre: ");
  scanf("%d", &num);
  (isPrime(num) == 0) ? printf("Le nombre est premier") : printf("Le nombre n'est pas premier");

  
    return 0;
}