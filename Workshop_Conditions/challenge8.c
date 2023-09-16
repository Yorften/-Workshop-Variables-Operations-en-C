#include <stdio.h>
#include <math.h>
int main(){
    float note;
    do
    {
        printf("Saisir la note d\'eleve :");
        scanf("%f", &note);
    } while (note < 20);
    
    if(note < 10){
        printf("L'eleve est recale.");
    }else if (note < 12 && note >= 10)
    {
        printf("L'eleve est du mention passable.");
    }else if (note < 14 && note >= 12)
    {
        printf("L'eleve est du mention assez bien.");
    }else if (note < 16 && note >= 14)
    {
        printf("L'eleve est du mention bien.");
    }else 
        printf("L'eleve est du mention tres bien.");
    return 0;
}