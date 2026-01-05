/*
Merge Sort:
Merge Sort is a Divide and Conquer algorithm.

Steps:
Divide the array into two halves
Recursively sort both halves
Merge the two sorted halves
*/
#include <stdio.h>

// Merge two halves
void merge(int a[], int l, int m, int r) {
    //a[]=5,3,8,l=0,m=0,r=1
    int i = l;//0
    int j = m + 1;//1
    int k = 0;
    int temp[100];

    while (i <= m && j <= r)//
    {
        if (a[i] < a[j]){//5<3
            temp[k++] = a[i++];
        }
        else{
            temp[k++] = a[j++];
            //temp[0]=3,j=2,k=1
        }
    }

    while (i <= m){//1<=0
        temp[k++] = a[i++];
        //temp[1]=5,i=1
    }

    while (j <= r){//2<=1
        temp[k++] = a[j++];
    }

    for (i = l, k = 0; i <= r; i++, k++){//
        a[i] = temp[k];
        //a[0]=3,a[1]=5,a[2]=8
    }
}

// Merge Sort function
void mergeSort(int a[], int l, int r) {
    //a[]=5,3,8,l=0,r=0
    if (l < r) //1<1
    {
        int m = (l + r) / 2;//0

        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);
        merge(a, l, m, r);
    }
}

int main() {
    int n;
    scanf("%d",&n);//3
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    mergeSort(a, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
