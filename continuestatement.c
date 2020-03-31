# include<stdio.h>

int main()
{     
      int i, age;
      printf("Enter the the number: \n");
      
      for (i=0; i<18; i++)  
      {
            printf("%d \n Enter your age :\n ",i);
            scanf("%d", &age);
            
            if (age>18)
            {
                  continue;
            }
            
            printf("We have not come across any continue statements.\n");
            printf("we are out from the loop.");
      }
      return 0;
}