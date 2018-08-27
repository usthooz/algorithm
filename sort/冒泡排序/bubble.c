#include <stdio.h>
#define LEN 5
 
/*
    input:
    4 1 5 2 3
    output:
    1 2 3 4 5
*/
void bubble(int a[], int n);
 
void bubble(int a[], int n)
{
    int i, j, temp;
    for (j = 0; j < n - 1; j++)
        for (i = 0; i < n - 1 - j; i++)
        {
            if(a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
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
    bubble(number, LEN);
    printf("\noutput:\n");
    for (i = 0; i < LEN; i++)
    {
        printf(" %d", number[i]);
    }
}