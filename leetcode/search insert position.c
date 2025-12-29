#include <stdio.h>
int main() 
{
    int n, target;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    printf("Enter target value: ");
    scanf("%d", &target);
    int low = 0, high = n - 1, mid;
    while (low <= high) 
    {
        mid = (low + high) / 2;
        if (nums[mid] == target)
        {
            printf("Target found at index: %d\n", mid);
            return 0;
        }
        else if (nums[mid] < target) 
        {
            low = mid + 1;
        }
        else 
        {
            high = mid - 1;
        }
    }
    printf("Target not found.\nInsert position: %d\n", low);
    return 0;
}
