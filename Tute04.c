/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum(int Num1,int Num2);
int maximum(int Num1,int Num2);
int multiply(int Num1,int Num2);
int main()
{
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}

int minimum(int Num1,int Num2)
{
    int min;
    if(Num1 > Num2)
    min = Num2;
    else
    min = Num1;
    return min;
}

int maximum(int Num1,int Num2)
{
    int max;
    if(Num1 > Num2)
    max = Num1;
    else
    max = Num2;
    return max;
}

int multiply(int Num1,int Num2)
{
    int multi;
    multi = Num1 * Num2;
    return multi;
}

   
