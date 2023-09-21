#include <stdio.h>
int main ()
{
    float note1 , note2 , note3 ;
    float moyeene ;

    printf("noter bien que la note sur 20 \n");
    printf("Enter votre notes : ");
    scanf ("%f %f %f" , &note1 , &note2 , &note3);
    moyeene  = (note1 + note2 + note3) / 3; 
    printf(" la  moyeene est : %.2f \n" , moyeene);
    if ( moyeene >=16)
    {

        printf(" Tres Bien");
    }
    // entre 14 et 16
    else if (moyeene >= 14 && moyeene < 16 ) 
    {
        printf(" Bien");
    
    }
    else if ( moyeene >= 12 && moyeene < 14)
    {
             printf("Assez Bien");
    }
    else if ( moyeene >= 10 && moyeene < 12)
    {
             printf(" Passable");
    }
    else 
    {
        printf (" Inssufisant");

    }


 }