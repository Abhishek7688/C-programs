/*    Write a program to enter the marks of student in four subject.

      Then calculate the total,percentage,aggregate,and display the grade obtain by student.
*/

# include <stdio.h>

int main()
{
      int marks1,marks2,marks3,marks4,total=0;
      float avg =0.0;

      printf("Enter the marks obtain in (Physics): \n");
      scanf("%d", &marks1);
      printf("Enter the marks obtain in (Chemistry): \n");
      scanf("%d", &marks2);
      printf("Enter the marks obtain in (Maths): \n");
      scanf("%d", &marks3);
      printf("Enter the marks obtain in (Copmuter): \n");
      scanf("%d", &marks4);

      total=marks1 + marks2 + marks3 + marks4;
      avg =(float) total/4;
      // percentage =(float)total/400*100;

      printf("TOtal=%d \n", total);
      // printf("Percentage=%d %% \n", percentage);
      printf("Aggregate = %f %% \n", avg);

      if (avg >= 75)
      {
            printf("Grade: Distention \n");
      }
      else if (avg>=60 && avg<75)
      {
            printf("Grade: First Division \n");
      }
      else if (avg>=50 && avg<60)
      {
            printf("Grade: Second Division \n");
      }
      else if (avg>=40 && avg<50)
      {
            printf("Grade: Third Division \n");
      }
      else
      {
            printf("Result: Fail \n");
      }
      
     return 0;
      
}