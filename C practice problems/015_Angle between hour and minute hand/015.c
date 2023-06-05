#include <stdio.h>
#include <math.h>

int getAngle(int H, int M);

int getAngle(int H, int M) {
    float angle = ((11.0 / 2.0) * M) - (30.0 * H);
    return floor(angle);
}

int main() {
    printf("%d \n", getAngle(3, 30));
    return 0;
}

