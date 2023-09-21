#include <stdio.h>
#include <math.h>
int main ()
{
    float a, b, c, delta ;
    float x , x1, x2 ;
    printf(" la eqaution 2 eme degree ecrire comme suit : \n ax^2 + bx + c\n");
    printf ("=========================================================\n"); 
    printf(" enter les valeur de a , b et c :");
    scanf ("%f %f %f", &a , &b , &c);
    delta =pow (-b ,2) + (4 *a *c);
    printf( " delta egal : %.2f \n" , delta);
    if (delta < 0)
    {
        printf ("invalid");
    }
    else if (delta == 0) 
    {
        x = (-b) /(2*a) ;
        printf(" le solution c est :  %.2f" , x);

    }
    else 
    {
        x1 = (-b- sqrt(delta)) / (2 *a);
        x2 = (-b + sqrt(delta)) / (2 *a);
        printf(" ilya deux solution : x1 = %.2f  x2 = %.2f " , x1 , x2) ;
    
    }
    
}