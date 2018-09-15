#include <stdio.h>
#define LEN 5
 
/*
    input:
    4 1 5 2 3
    output:
    1 2 3 4 5
*/
void insertion(int a[], int n);
 
// 插入排序
void insertion(int a[], int n)
{
    int i;
    for (i=1;i<n;i++)
        // 小于前一个元素
        if (a[i] < a[i-1])
        {
            int index = i-1;
            int temp = a[i];
            // 找到合适的位置
            while(index >=0 && a[index]>temp){
                a[index+1] = a[index];
                index --;
            }
            a[index+1] = temp;
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
    insertion(number, LEN);
    printf("\noutput:\n");
    for (i = 0; i < LEN; i++)
    {
        printf(" %d", number[i]);
    }
}