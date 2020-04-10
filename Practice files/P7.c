/* A company decided to give bonus to employes on diwali. A 5% bonus give to male and 10% to female workers.

   Write a program to enter salary and sex of a employee.
   If employee salary is less than 10,000 then employee get 2% extra bonus on salary.

   Caculate the bonus that has given to employee and display the salary that employee will get.
*/

# include <stdio.h>

int main()
{
      float salary,bonus,amttobepaid;
      char gender;

      printf("Enter is employee is (m or f): \n");
      scanf("%c", &gender);

      printf("Enter the salary of the employee : \n");
      scanf("%f" ,&salary);

      printf("Salary = %f \n", salary);

      if (gender =='m')
      {
            (bonus= 0.05 * salary);
      }
      
      else 
      {
            (bonus= 0.10 * salary);
      }
      if (salary<10000)
      {
            (bonus +=0.02*salary);
      }

     amttobepaid= salary+bonus;  //Total=amount to be paid
      printf("Bonus = %f \n", bonus);
      printf("********************* \n");
      printf("Amount to be paid : %f",amttobepaid);

      return 0;
      
}