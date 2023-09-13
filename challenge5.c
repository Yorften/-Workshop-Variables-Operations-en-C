#include <stdio.h>
#include <math.h>
int main(){
    float x1,y1,x2,y2;
    printf("Saisir les coordonees du point M :\n");
    scanf("%f%f",&x1,&y1);
    printf("Saisir les coordonees du point N :\n");
    scanf("%f%f",&x2,&y2);
    printf("La distance entre la point M et N est : %f ",sqrt(pow(x2-x1,2)+pow(y2-y1,2)));
}
