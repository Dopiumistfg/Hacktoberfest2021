#include<stdio.h>
 
int KadaneSum(int arr[], int size)
{
    int max_yet = -2147483648, max_end = 0;
 
    for (int i = 0; i < size; i++)
    {
        max_end = max_end + arr[i];
        if (max_yet < max_end)
            max_yet = max_end;
 
        if (max_end < 0)
            max_end = 0;
    }
    return max_yet;
}
 
int main()
{
    int a[] = {-7, -3, 4, -2, 2, 1, -9, -2};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = KadaneSum(a, n);
    printf("Maximum contiguous sum is %d",max_sum);
    return 0;
}