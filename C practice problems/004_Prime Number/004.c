#include <stdio.h>
#include <math.h>

int isPrime(int N) {
    if (N <= 1) {
        return 0;  // 0 and 1 are not prime
    }

    for (int i = 2; i <= sqrt(N); i++) {
        if (N % i == 0) {
            return 0;  // N is divisible by i, not prime
        }
    }

    return 1;  // N is prime
}

int main() {
    int N=2;
    printf("%d ",isPrime(N));
    return 0;
}

