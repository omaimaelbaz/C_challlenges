#include <stdio.h>
#include <math.h>
int main () {
// programe qui calcul la puissance de X^y 
 
int x , y ;
int p ;
printf ( " enter la valeur de  X  : ");
scanf ("%d" ,&x);
printf ( " enter la valeur de  Y :");
scanf ("%d" ,&y);

p= pow(x,y);
printf("la puissance  de %d est  %d" ,x , p );




}