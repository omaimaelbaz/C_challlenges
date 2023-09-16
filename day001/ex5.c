#include <stdio.h>
int main ()
{
    // convert T second en : heures , min ,second 
    // ex : T = 56263 => 15H 37 min 34 S 
    int t ;
    int hour ;
    int min ;
    int sec;
    printf("enter le temps en second :") ;
    scanf("%d" , &t);

    hour = t / 3600 ;
     min =(t %3600) /60  ;
     sec = t % 60 ;
    printf(" T= %dH %d Min  %d sec" ,hour, min ,sec);
    

    
}