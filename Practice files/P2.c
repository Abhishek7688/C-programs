// Write a program to find wether the given no. is even or odd.
// use of ifelse statement.

# include <stdio.h>

int main()
{
      int num;

      printf("Enter the number: \n ");
      scanf("%d", &num);

      if (num %2 == 0)
      {
            printf("The %d is an even number \n", num);
      }
      else
      {
            printf("The %d is odd number \n", num);
      }
      
      return 0;
}