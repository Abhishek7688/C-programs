// Program to find whether the given year is leap year or not. 


# include <stdio.h>

int main()
{
      int year;
      printf("Enter any year :\n");
      scanf("%d", &year);

      // if no. is divisible by 4 and 400 then the year is leap.
      // but if no. divisible by 100 then year is not leap.
      // To make it false we has use logical not operator.

      if (((year%4==0) && (year%100 !=0)) || (year%400 ==0))
      {
           printf("The year entered is a leap year. \a");
      }
      else
      {
            printf("The year entered is not a leap year. \a");
      }
      
      return 0;
}