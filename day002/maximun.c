#include <stdio.h>

int main ()
{
    // le cas ou l 'utlisateur enter plusier nombres 

    int nbr [20] ;
    int i ;
    int max ;
    bool true ;
    printf (" enter votre nombres :");
    scanf ("%d" , &nbr);
    i = 0 ;
    max = nbr[i] ;
    while (true)
    {
        if ( max == nbr[i] )
        {
            printf(" le max est : %d" , nbr);
        }
        else 
        {
            max = nbr [i] + 1;
             printf(" le max est : %d" , nbr);
        }
        i ++;
     }
    


}