#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void freq(void);

int main ()
{
    freq();
    return 0;
}
void freq()
{
    printf("function pass\n");
    int i=0, n=0, m, x, random;
    int array[10] = {0};
    time_t t;

    srand((unsigned) time(&t)); /* Intializes random number generator */

    printf("Enter value from 1-100\n");
    scanf("%d",&x);

    for (i; i<x; i++)
    {
        random = (rand()%100)/10;
        array[random] += 1;
    }
    for (n; n<10; n++)
    {
        printf("%d0 - %d9  | ", n,n);
        for (m=0; m<array[n]; m++)
        {
            printf("*");
        }
        printf("\n");
    }
}