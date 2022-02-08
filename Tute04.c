/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum(int no1, int no2);// function declaration
int maximum(int no1, int no2);// function declaration
int multiply(int no1, int no2);// function declaration

int minimum(int no1, int no2)
    {
     int min=0;
      if(no1<no2)
      {
         min=no1;
      }
      else if(no2<no1)
      {
         min=no2;
      }
       else{
        printf("Numbers are equal");
      }
      return min;
    }// end of implementing function of maximum
int maximum(int no1, int no2)
    {
      int max=0;
       if(no1>no2)
      {
           max=no1;     
      }
      else if(no2>no1)
      {
          max=no2;
      }
      else{
        printf("Number are equal");
      }
      return max;
    } // end of implementing function of maximum
int multiply(int no1, int no2)
   {
      int mul=0;
      mul = no1*no2;
      return mul;
   }// end of implementing function of multiply

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d \n", minimum(no1, no2));
   printf("%d \n", maximum(no1, no2));
   printf("%d \n", multiply(no1, no2));
   return 0;
}
