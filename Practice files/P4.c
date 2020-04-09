// Write the program to enter a character and then determine whether it is vowel or not.
// BY the use of ifelse statement.

#include <stdio.h>

int main()
{
      char ch;
      int lowercase, uppercase;

      printf("Enter an alphabet: \n");
      scanf("%c", &ch);

      // evaluates to 1 if variable ch is lowercase
      lowercase = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
      // evaluates to 1 if variable ch is uppercase
       uppercase = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

      if (lowercase || uppercase)
           {
                 printf("%c is a vowel.", ch);
           } 
      else
           {
                 printf("%c is a consonant.", ch);
           } 
     
      return 0;
}
