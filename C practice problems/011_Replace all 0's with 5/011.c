#include <stdio.h>
#include <string.h>

char* convertFive(char* num) {
    int length = strlen(num);
    for (int i = 0; i < length; i++) {
        if (num[i] == '0') {
            num[i] = '5';
        }
    }
    return num;
}

int main() {
    int num = 1025;

    char snum[100];
    sprintf(snum, "%d", num); // Converts integer to string

    printf("Converted number: %s\n", convertFive(snum));

    return 0;
}

