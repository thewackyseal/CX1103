#include <stdio.h>
#define SIZE 4

void transpose2D(int ar[][SIZE], int rowSize, int colSize);

int main()
{
    int x,y;
    int ar[4][4] = {1,2,3,4, 1,1,2,2, 3,3,4,4, 4,5,6,7};
    transpose2D(ar, 4, 4);
    for (x=0; x<SIZE; x++)
    {
        for (y=0; y<SIZE; y++)
        {
            printf("%d",ar[x][y]);
        }
        printf("\n");
    }

    return 0;
}

void transpose2D(int ar[][SIZE], int rowSize, int colSize)
{
    int i, k;
    int trans[4][4] = {0};
    for (i=0; i<rowSize; i++)
    {
        for (k=0; k<colSize; k++)
        {
            trans[k][i] = ar[i][k];
        }
    }
    for (i=0; i<rowSize; i++)
    {
        for (k=0; k<colSize; k++)
        {
            ar[i][k] = trans[i][k];
        }
    }
}