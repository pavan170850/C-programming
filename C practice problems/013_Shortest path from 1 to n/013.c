#include <stdio.h>

int minimumStep(int N) {
    int steps = 0;

    while (N > 1) {
        if (N % 3 == 0)
            N /= 3;
        else
            N -= 1;
        
        steps++;
    }

    return steps;
}

int main() {
    int N = 10;
    int result = minimumStep(N);
    printf("Minimum number of steps: %d\n", result);

    return 0;
}

