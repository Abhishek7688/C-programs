/*
      n=3 
      You manage a travel agency and you want n drivers to input their following details:
1. Name 
2. Driveng License no.
3. Route
4. Kms

your program should be able to take n as a input (or you can take n=3 for simplicity) and your drivers wil start 
   inputting their details one by one.


Your program hould print details of the drivers in a beautiful fasion.
USER STRUCTURE.

*/

#include <stdio.h>

struct Driver
{
      char name[34];
      char dlno[45];
      char route[47];
      int kms;
};

int main()
{
      struct Driver d1,d2,d3;
      printf("Enter the details of the Drivers no.1: \n");
      printf("Enter the name of the first drivers \n");
      scanf("%s", &d1.name);

      printf("Enter the dlno. of the first drivers \n");
      scanf("%s", &d1.dlno);

      printf("Enter the route of the first drivers \n");
      scanf("%s", &d1.route);

      printf("Enter the number of kms of the first drivers \n");
      scanf("%d", &d1.kms);

      printf("Enter the details of the Drivers no.2: \n");
      printf("Enter the name of the second drivers \n");
      scanf("%s", &d2.name);

      printf("Enter the dlno. of the second drivers \n");
      scanf("%s", &d2.dlno);

      printf("Enter the route of the second drivers \n");
      scanf("%s", &d2.route);

      printf("Enter the number of kms of the second drivers \n");
      scanf("%d", &d2.kms);

      printf("Enter the details of the Drivers no.3: \n");
      printf("Enter the name of the third drivers \n");
      scanf("%s", &d3.name);

      printf("Enter the dlno. of the third drivers \n");
      scanf("%s", &d3.dlno);

      printf("Enter the route of the third drivers \n");
      scanf("%s", &d3.route);

      printf("Enter the number of kms of the third drivers \n");
      scanf("%d", &d3.kms);                                 //Til this is a code for the entring the details 


// from here code for printing the details.
      printf("*****Printing information of these drivers******:\n\n");
      printf("For Driver no.1 name is: %s \n", d1.name);
      printf("DL number is: %s \n", d1.dlno);
      printf("Route is:%s \n", d1.route);
      printf("Kms is:%d \n", d1.kms);

      printf("For Driver no.2 name is: %s \n", d2.name);
      printf("DL number is: %s \n", d2.dlno);
      printf("Route is:%s \n", d2.route);
      printf("Kms is:%d \n", d2.kms);

      printf("For Driver no.3 name is: %s \n", d3.name);
      printf("DL number is: %s \n", d3.dlno);
      printf("Route is:%s \n", d3.route);
      printf("Kms is:%d \n", d3.kms);
      
      return 0;
}