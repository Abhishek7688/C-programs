# include <stdio.h>

int main ()
{
      int marks;
      printf ("Your result of this year: \n");

      scanf("%d",& marks);
      printf("You has ented the %d number\n");

      if (marks>35) 
      {
            printf("You has cleared the exam\n");
      }
      else
      {
            printf("Your has not cleared the exam\n");
      }

      return 0;
      
}