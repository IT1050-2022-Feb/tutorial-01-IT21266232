/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
   int Mark1,Mark2;
   float Avg;
   
   printf("Enter the marks of first subject:");
   scanf("%d",&Mark1);
   
   printf("Enter the marks of second subject:");
   scanf("%d",&Mark2);
   
   Avg = (Mark1 + Mark2) / 2.0;
   printf("Your average is:%.2f",Avg); 
  
  return 0;
}

