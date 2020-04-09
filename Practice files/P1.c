// Write a program to determine the character entered by the user.

#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int main()
{
      int ch;
      printf("Press any key: ");
      scanf("%c", &ch);

      if (isalpha(ch) > 0)
      {
            printf("The user has enterd a character \n");
      }
      if (isdigit(ch) > 0)
      {
            printf("The user has entered a digit \n");
      }
      if (ispunct(ch) > 0)
      {
            printf("THe user has entered the puchation character \n");
      }
      if (isspace(ch) > 0)
      {
            printf("THe user has entered a white space character \n ");
      }

      return 0;
}
