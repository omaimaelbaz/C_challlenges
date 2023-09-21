#include <stdio.h>
int main()
{
    // programe calcul la somne d enteier 
    // si utilisateur par ex enter 3  le programme afichier 
    // 1 + 2 + 3  et calcul la somme 6
    int nbr ;
    int i;
    int sum = 0;
    printf(" enter un nombre");
    scanf("%d" ,&nbr);
    for (i = 1; i <= nbr ; i++)
    {
        sum = sum +i;
        printf( "%d + "  , i);
    
    }
    printf( " la somme est %d : \n" ,sum);

}