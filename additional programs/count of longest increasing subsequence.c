/*
What is LIS?
Given an array, find the length of the longest subsequence such that:
Elements are in increasing order
Elements are not required to be contiguous
*/
#include <stdio.h>

int lower_bound(int arr[], int size, int target) {
    //size=1,target=1
    int l = 0, r = size - 1, ans = size;
    while (l <= r) {//0<=-1
        int mid = (l + r) / 2;//0
        if (arr[mid] >= target) {//3>=1
            ans = mid;//0
            r = mid - 1;//-1
        } else {
            l = mid + 1;
        }
    }
    return ans;
}

int main() {
    int n;
    scanf("%d", &n);//2

    int arr[n], tail[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
 // 3 1

    int len = 0;//0
    for (int i = 0; i < n; i++) {//2<2
        int pos = lower_bound(tail, len, arr[i]);//0
        tail[pos] = arr[i];
        if (pos == len)//0==1
            len++;//1
    }

    printf("%d\n", len);
    return 0;
}
