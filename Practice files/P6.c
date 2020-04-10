// Write a program to test wether the program is positive, negative,or equal to zero.
// Using ifelse-if statement. 


 # include <stdio.h>

 int main()
{     
      int num;
      printf("Enter the number: \n");
      scanf("%d" , &num);

      if (num==0)
      {
            printf("The entered %d number is zero.\n", num);
      }
      else if (num >0)
      {     
            printf("The entered %d number is positive. \n", num);
      }
      else
      {
            printf("The entered %d number is negative. \n", num);
      }
      
      
      return 0;      
} 