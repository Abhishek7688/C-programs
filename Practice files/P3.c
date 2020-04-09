// Write a program to enter any character.
// If the character is in lower case convert into upper case convert into lower case . 
// By the use of if else statement.

# include<stdio.h>

int main()
{
      int ch;
      printf("Enter any character : \n");
      scanf("%d", &ch);

      if (ch>='A' && ch<='Z')
      {
            printf("The entered character is in the upper case.\n In lower case it is :%c \n", (ch+32));
      }
      else
      {
            printf("The number entered is in lower case.\n In upper case it is :%c \n", (ch+32));
      }
      
      return 0;
}