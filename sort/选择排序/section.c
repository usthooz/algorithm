#include <stdio.h>
#define LEN 5
 
/*
    input:
    4 1 5 2 3
    output:
    1 2 3 4 5
*/
void section(int values[], int n);
 
void section(int values[], int n)
{
    int i, j, temp, min;
    for (i = 0; i < n-1 ; i++)
    {
        min = i;
        for (j = i+1; j < n ; j++)
        {
            if(values[j] < values[min])
            {
                min = j;
            }
        }
        temp = values[min];
        values[min] = values[i];
        values[i] = temp;
    }
}
 
int main()
{
    int number[LEN] = {4,1,5,2,3};
    int i;
    printf("input:\n");
    for (i = 0; i < LEN; i++)
    {
        printf(" %d", number[i]);
    }
    section(number, LEN);
    printf("\noutput:\n");
    for (i = 0; i < LEN; i++)
    {
        printf(" %d", number[i]);
    }
}