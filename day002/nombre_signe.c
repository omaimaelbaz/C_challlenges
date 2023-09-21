#include <stdio.h>
int main (){
    int a ;
    int b ;
    printf ("enter les valeur de a et b :") ;
    scanf("%d %d" , &a ,&b);
    if ( a > 0 && b > 0 || a < 0 && b <0)
    {
        printf("les deux nombre %d et %d on a le meme signe", a,b);

    }
    else 
        printf("les deux nombre %d et %d on a  pas le meme signe", a,b);


 }