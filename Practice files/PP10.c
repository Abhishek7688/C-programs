/*  Write a program to list all the leap years from 2000 to 2030.

    With the use of Do-While loop.  
*/

#include <stdio.h>

int main()
{
      int m = 2010, n = 2030, num;

      printf("The leap years are shown below: \n");

      do
      {
            if (((m % 4 == 0) && (m % 100 != 0)) || (m % 400 == 0))
            {
                  printf("%d is the leap year.\n", m);
            }
            m = m + 1;

      } while (m <= n);

      return 0;
}