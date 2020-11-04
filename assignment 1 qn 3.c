#include <stdio.h>
#define SIZE 100
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize);
int main()
{
    int data[SIZE][SIZE];
    int i,j;
    int rowSize, colSize;

    printf("Enter the array size (rowSize, colSize): \n");
    scanf("%d %d", &rowSize, &colSize);
    printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
    for (i=0; i<rowSize; i++)
        for (j=0; j<colSize; j++)
            scanf("%d", &data[i][j]);
    printf("compress2D(): \n");
    compress2D(data, rowSize, colSize);
    return 0;
}
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize)
{
   int x,y,zero, one;
   for (x=0; x<rowSize; x++)
   {
      zero = one =0;
      for (y=0; y<colSize; y++)
      {
         if (data[x][y]==0)
         {
            zero++;
            if (one!=0)
            {
               printf("1 %d ",one);
               one = 0;
            }
         }
         else
         {
            one++;
            if (zero!=0)
            {
               printf("0 %d ", zero);
               zero = 0;
            }
         }        
      }
      if (one != 0)
      {
         printf("1 %d ", one);
      }
      else if (zero != 0)
      {
         printf("0 %d ", zero);
      }
      printf("\n");
   }
} 