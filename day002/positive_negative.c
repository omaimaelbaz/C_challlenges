#include <stdio.h>
int main ()
{
    int nbr ;
    printf ( "enter un nombre quelle que soit positive ou bien negative :");
    scanf ("%d" , &nbr);

    if ( nbr < 0)
    {
        printf( " le nombre %d est : negative " , nbr);
        
    }
    else if (nbr == 0) {
        printf( " le nombre %d est : null " , nbr);
    
    }
    else 
         printf( " le nombre %d est : positive " , nbr);

}