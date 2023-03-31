#include <stdio.h>

int posOfRightMostDiffBit(int m, int n) {
    // Perform XOR on m and n
    int x = m ^ n;
    
    // Find the position of the rightmost set bit
    int pos = 1;
    while (x > 0) {
        if (x & 1) {
            return pos;
        }
        x >>= 1;
        pos++;
    }
    
    // If both numbers are the same, return -1
    return -1;
}

int main() {
    int m = 11, n = 9;
    printf("%d\n", posOfRightMostDiffBit(m, n));
    
    m = 52, n = 4;
    printf("%d\n", posOfRightMostDiffBit(m, n));
    
    m = 1, n = 1;
    printf("%d\n", posOfRightMostDiffBit(m, n));
    
    return 0;
}

