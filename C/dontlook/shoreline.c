#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    int shoreline[44] = {[0] = 15, [5] = 10, [12] = 10, [16] = 10, [21] = 5, [30] = 20, [34] = 10, [43] = 15};
    //relevant indexes: 0, 5, 12, 16, 21, 30, 34, 43

    double p = 0.0;
    //potentiality: people / (1 + distance ^e)

    double p_sum = 0;
    double p_sum_max = 0;

    int max_index = -1;

    //locate maximum potentiality
    for(int i = 0; i < 44; i++)
    {
        p_sum = 0;
        for(int j = 0; j < 44; j++)
        {
            p = shoreline[j] / (1 + pow(abs(j-i)/2, M_E));
            p_sum += p;
        }
        if(p_sum_max < p_sum)
        {
            p_sum_max = p_sum;
            max_index = i;
        }
    }

    //print results
    printf("Maximum sum of potentiality %lf at index %d\n", p_sum_max, max_index/2);

    return 0;
}
