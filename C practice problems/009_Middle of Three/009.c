#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

int middle(int A, int B, int C) {
    int smallest = min(A, B);
    int largest = max(A, B);

    if (C > largest)
        return largest;
    else if (C < smallest)
        return smallest;
    else
       return C;
}

int main() {
    int A = 978, B = 518, C = 300;
    printf("%d\n", middle(A, B, C));



    return 0;
}

