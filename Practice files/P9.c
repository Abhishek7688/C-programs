/* Write a program that accept a number from 1 to 10.
   
   Print wether the number is even or odd using the switch case construct.
*/

# include <stdio.h>

int main()
{
      int num;
      printf("Enter the number between (1 to 10) :\n");
      scanf("%d", &num);

      switch (num)
      {
      case 1:
      case 3:
      case 5:
      case 7:
      case 9:

            printf("ODD NUMBER \n");
            break;
      case 2:      
      case 4: 
      case 6: 
      case 8: 
      case 10: 

            printf("EVEN NUMBER");
            break;

      default:
            printf("INVALID NUMBER");
            break;
      }

      return 0;
}