#include <stdio.h>
int main () {

    // programe calucler l age a partir de la date naissance 

    int age ;
    int birth ;
    printf (" enter your  birth year : ");
    scanf("%d" , &birth);

    age = 2023 - birth ;
    printf("your age is : %d" , age);
    return 0;

}