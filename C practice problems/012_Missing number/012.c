#include <stdio.h>

int missingNumber(int *A, int N);

int missingNumber(int *A, int N) {
    int sum = 0;

    for (int i = 0; i < N-1; i++) {
        sum += A[i];
    }

    int totalSum = (N * (N + 1)) / 2;
    int missing = totalSum - sum;

    return missing;
}

int main() {
    int N = 6;
    int A[] = {2, 5, 3,4, 1};
    int result = missingNumber(A, N);
    printf("Missing number: %d\n", result);
    return 0;
}

