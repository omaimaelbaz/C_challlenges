#include <stdio.h>
int main ()
{
    // max entre deux nombre 
    int num1 ;
    int num2 ;
    printf ("enter deux nombre   num1 est num2  :");
    scanf("%d %d" ,&num1 ,&num2);
    // pour abtenir le maximun il faut comaparer premier nombre evec  num2
    if ( num1 > num2)
    {
        printf ("le maximun est : %d" , num1);
    }
    else 
         printf ("le maximun est : %d" , num2);

}