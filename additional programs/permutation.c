/*
Permutations:
What is a Permutation?
A permutation is an arrangement of elements where order matters.

Example:
For [1, 2, 3], permutations are:
[1,2,3]
[1,3,2]
[2,1,3]
[2,3,1]
[3,1,2]
[3,2,1]
*/
#include <stdio.h>
#include <stdbool.h>

void backtrack(int idx, int n, int nums[], int perm[], bool used[]) {
    //idx=2,n=2
    if (idx == n) {//2==2
        for (int i = 0; i < n; i++){//1<2
            printf("%d ", perm[i]);
        }
        printf("\n");
        return;
    }

    for (int i = 0; i < n; i++) {//1<2
        if (!used[i]) {//
            used[i] = true;
            perm[idx] = nums[i];

            backtrack(idx + 1, n, nums, perm, used);

            used[i] = false;   // backtrack
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);//2

    int nums[n];
    int perm[n];
    bool used[n];

    for (int i = 0; i < n; i++) {//0<2
        scanf("%d", &nums[i]);
        used[i] = false;
    }

    backtrack(0, n, nums, perm, used);
    return 0;
}
