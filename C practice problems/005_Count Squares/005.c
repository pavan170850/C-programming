#include <stdio.h>

int countSquares(int n);

int countSquares(int n){
    int i=1;
    int c=0;
    while (i*i <n){
        c+=1;
        i++;
    }
    return c;
}

int main(){
    int n=16;
    printf("%d ",countSquares( n));
}
