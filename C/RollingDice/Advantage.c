#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROLL_NUMBER 1000000000

//checks how disadvantage/advantage in d&d affects rolls
int main(void)
{
    int roll_a;
    int roll_b;
    long long int sum = 0;
    srand(time(NULL));

    //normal roll
    for(int i = 0; i < ROLL_NUMBER; i++)
    {
        roll_a = rand() % 20 + 1;
        //printf("Roll: %d\n", roll_a);
        sum += roll_a;
    }

    printf("Average on normal roll: %f\n", (float)sum/ROLL_NUMBER);
    getchar();

    //advantage
    sum = 0;
    for(int i = 0; i< ROLL_NUMBER; i++)
    {
        roll_a = rand() % 20 + 1;
        roll_b = rand() % 20 + 1;
        sum += roll_a > roll_b ? roll_a : roll_b;
        //printf("Roll: %d\n", roll_a > roll_b ? roll_a : roll_b);
    }

    printf("Average on advantageous roll: %f\n", (float)sum/ROLL_NUMBER);
    getchar();

    //disadvantage
    sum = 0;
    for(int i = 0; i< ROLL_NUMBER; i++)
    {
        roll_a = rand() % 20 + 1;
        roll_b = rand() % 20 + 1;
        sum += roll_a > roll_b ? roll_b: roll_a;
        //printf("Roll: %d\n", roll_a > roll_b ? roll_b : roll_a);
    }

    printf("Average on disadvantageous roll: %f\n", (float)sum/ROLL_NUMBER);
    getchar();

    return 0;   
}
