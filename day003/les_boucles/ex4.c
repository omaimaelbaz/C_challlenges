#include <stdio.h>
int main()
{
    // programe aficher le dix nombre suivant d un nombre
    // apr ex nbr = 33 ; le programme afiche 34 jusqua 43
    int nbr;
    int i;
    printf( " enter un nombre  :");
    scanf("%d" ,&nbr);
    i=nbr+1;
    while (i <= nbr +10)
    {
        printf("%d" , i);
        i++;
    }

}