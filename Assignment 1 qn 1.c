	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
void printPattern3(int height);
int main()
{
   int height;

   printf("Enter the height: \n");
   scanf("%d", &height);
   printf("printPattern3(): \n");
   printPattern3(height);
   return 0;
}
void printPattern3(int height)
{
    int i,j, number;
    for (i = 1; i <= height; i++) {
        number = i;
        for (j = 1; j <= i; j++) {
            if (number<10)
            {
                printf("%d", number);
                number++;
            }
            else 
            {
                number=0;
                printf("%d", number);
                number++;
            }
        }
        printf("\n");
    }    
}
