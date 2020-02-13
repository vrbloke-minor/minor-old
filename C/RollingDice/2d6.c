#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROLL_NUMBER 10000000

//checks average roll with 2d6
int main(void)
{
   int roll_a;
   int roll_b;
   long long int sum = 0;

   for(int i = 0; i < ROLL_NUMBER; i++)
   {
       roll_a = rand() % 6 + 1;
       roll_b = rand() % 6 + 1;
       sum += roll_a + roll_b;
   }

   printf("Average roll: %f\n", (float)sum/ROLL_NUMBER);

   return 0;   
}
