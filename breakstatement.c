# include<stdio.h>

int main()
{     
      int i, age;
      printf("Enter the the number: \n");
      
      for (i=0; i<18; i++)  
      {
            printf("%d \n Enter your age :\n ",i);
            scanf("%d", &age);

            if (i>18)
            {
                  break;
            }
            
            return 0;
      }
      
      return 0;
}