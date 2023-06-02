#include <stdio.h>

int chocolates(int n,int *a) ;
int chocolates(int n,int *a) {
    
    int start=0;
    int end=n-1;
    while (start<end){
        if (a[start] < a[end])
            end--;
        else
            start++;
            
    }
    return a[end];
}

int main() {
    int a[]={5, 3, 1, 6, 9};
    int n=sizeof(a)/sizeof(a[0]);
    printf("%d ",chocolates(n,a));
    
}

