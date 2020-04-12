/*  Write a program to find no. of students class passed , failed ,a nd get zero in their exams.
      
      Using While loop.
 
 */

#include <stdio.h>

int main()
{
      int num;
      int passed = 0, failed = 0, zero = 0;

      printf("\nEnter -1 to exit.\n");
      printf("Enter the number: \n");
      scanf("%d", &num);

      while (num != -1)
      {
            if (num >= 35)
                  passed++;

            else if (num < 35)
                  failed++;

            else
                  zero++;

            scanf("%d", &num);
      }

      num = passed + failed + zero;
      printf("Total number of students: %d \n", num);
      printf("The number of students passed in the exam :%d \n", passed);
      printf("The number of students failed in the exam :%d \n", failed);
      printf("The number of students  not sit or get zero in the exam :%d \n", zero);

      return 0;
}