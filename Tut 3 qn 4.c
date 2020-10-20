#include <stdio.h>
#define SIZE 4

void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize);

int main()
{
    int ar[SIZE][SIZE]={{4,3,8,6},{9,0,6,5},{5,1,2,4}, {9,8,3,7}};
    int x, y;
    reduceMatrix2D(ar, 4, 4);
    for (x=0; x<SIZE; x++)
    {
        for (y=0; y<SIZE; y++)
        {
            printf("%d ",ar[x][y]);
        }
        printf("\n");
    }    
    return 0;
}

void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize)
{
    int i,k,j,p, sum=0, temp;
    for (i=0; i<rowSize; i++)
    {
        for (k=i; k<rowSize; k++)
        {
            sum += ar[k][i];
            temp = sum;
            for (p=0; p<colSize; p++)
            {
                if (i==p)
                {
                    ar[i][p] = temp;
                }
                else
                {
                    ar[k][i] = 0;
                }
            }
        }
        sum = 0;     
    }
}