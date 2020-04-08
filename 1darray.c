# include<stdio.h>

int main()
{
      int marks[4];

      for (int i = 0; i < 4; i++)
      {
            printf("Enter the value of %d elements of the array \n", i  );
            scanf("%d", &marks[i]);
      }

      for (int i = 0; i < 4; i++)
      {
            printf(" The value of %d elements of the array is %d \n", i, marks[i]);
           
      }
      
      // marks[0] = 34;
      // printf("marks of student 1 is %d \n", marks[0]);
      // marks[0] = 4;
      // marks[1] = 24;
      // marks[2] = 34;
      // marks[3] = 44;
      
      // printf("marks of student 1 is %d \n", marks[0]);
      

      return 0;

}