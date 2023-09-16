#include <stdio.h >
#include <math.h>
int main ()
{
    // petite example sur caclculatrice ;
    int a ,b ;
    int somme;
    int diffrence;
    int produit ;
    int division ;
    int operation ;

    printf ("enter le nombre a et b :");
    scanf("%d %d" , &a ,&b);
    printf ("maintent choiser votre operation : \n") ;
    printf(" 1 : addition \n " );
    printf(" 2 : diffrence \n " );
    printf(" 3 : produit \n " );
    printf(" 4 : division \n " );
    printf("enter le nombre de operation :");
    scanf( "%d" , &operation);
    if (operation == 1)
    {
        somme = a + b ;
        printf(" la somme de %d  + %d  = %d " ,a ,b , somme);
    }
     else if (operation == 2)
    {
        diffrence= a  - b ;
        printf(" la diffrence de %d  - %d  = %d " ,a ,b , diffrence);
    }
     else if (operation == 3)
    {
        produit = a * b ;
        printf(" le produit  de %d  * %d  = %d " ,a ,b , produit);
    }
     else if (operation == 4)
    {
        division = a / b ;
        printf(" la division de %d  / %d  = %d " ,a ,b , division);
    }
    else {
        printf (" enter un correct number of operation ");
    }

}