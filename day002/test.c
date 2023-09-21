#include <stdio.h>
int main ()
{
    float note1 , note2 , note3 ;
    float moyeene ;

    printf("noter bien que la note sur 20 \n");
    printf("Enter votre note : ");
    scanf ("%f %f %f" , &note1 , &note2 , &note3);
    moyeene  = (note1 + note2 + note3) / 3; 
    if ( moyeene >=16)
    {
        printf(" Tres Bien");
    }
    else 
    {
        printf ("hchhf");
    }