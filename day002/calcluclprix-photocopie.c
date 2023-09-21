#include <stdio.h>
int main ()
{
    float facture ;
    int nbr_photo;
    printf(" enter le nombre de photocopie que veut effectuer :");
    scanf ("%d" , &nbr_photo) ;

    if (nbr_photo <= 10)
    {
        facture = 0.30 * nbr_photo ;
        printf(" la facture total est : %.2f" , facture);

    }
    else if (nbr_photo <= 30)
     {
        facture = 0.30 * 10  + (nbr_photo - 10) * 0.25; 
        printf(" la facture total est : %.2f" , facture);
    
    }
    else 
    {
        facture = 0.30 * 10  + 20 * 0.25 + (nbr_photo - 30) * 0.20;  
        printf(" la facture total est : %.2f" , facture);


    }    



}