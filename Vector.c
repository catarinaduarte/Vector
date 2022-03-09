#include <stdio.h>

int main ()
{
    int num[100];
    int count;
    int totalnums;

    count = 0;
    do
    {
         printf ("\nEntre com um numero (-999 p/ terminar): ");
         scanf( "%d", &num[count] );
         count++;
    } while ( ( num[ count - 1 ] != -999 ) && ( count < 100) );
   
    totalnums = count - 1;
    printf ("\n\n\n\t Os números que você digitou foram:\n\n");
    for (count = 0; count < totalnums; count++ )
        printf (" %d",num[count]);
    printf ("\n");
    
    return(0); 
}