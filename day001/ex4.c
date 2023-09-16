#include <stdio.h >
int main ()
{
    // swap 
    int a ;
    int b ;
    int change ;
    printf(" enter la valeur de A :");
    scanf ("%d" , &a);
    printf(" enter la valeur de B :");
    scanf ("%d" , &b);
    change = a ;
    a = b ;
    b = change ;
    printf (" les nouvelle valeur de A = %d  et B = %d:" , a ,b);
}