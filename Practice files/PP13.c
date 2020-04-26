/*    Write a program to print star pattern :

      *
      **
      ***
      **** 
      *****
*/


# include <stdio.h>

int main()
{
      int i,j,num;
      printf("Star Pattern printed :");
      scanf("%d", &num);

      for (int i =0 ; i < num; i++)
      {     
            for (int j = 0; j <= i; j++)
            {
                  printf("*");
            }
                  printf("\n");
      }

      return 0;      
}