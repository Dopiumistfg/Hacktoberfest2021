#include<stdio.h>
 
int KadaneSum(int arr[], int size)
{
    int max_so_far = -2147483648, max_ending_here = 0;
 
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + arr[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
 
int main()
{
    int a[] = {-7, -3, 4, -2, 2, 1, -9, -2};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = KadaneSum(a, n);
    printf("Maximum contiguous sum is %d",max_sum);
    return 0;
}