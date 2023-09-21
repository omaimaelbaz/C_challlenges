#include <stdio.h>
int main ()
{
    int i;
    int nbr;
    printf(" enter un nombre enter 10 et 20:");
    scanf("%d" , &nbr);
    i = 0;
    while ( nbr >= 10 || nbr <= 20)
    {
        if ( nbr >20)
        {
            printf("Plus Grand ! \n");
        }
        else 
        {
            printf("Plus petit !! \n");
         }
            printf(" enter un nombre enter 10 et 20:");
            scanf("%d" , &nbr);
            i++;
    

    }
 }
    
