#include <stdio.h>

    int main ()
    {
        char tab[100][100];
        int i;
        for( i=0 ; i <=3 ; i++)
        {
            printf ("t[%d] = ", i+1);
            scanf("%s" , tab[i]);

        }
        // afichag de tab
        i = 0;
        while ( i <=3)
        {
            printf ( "%s \t" , tab[i]);
            i++;
        }
        
    }
