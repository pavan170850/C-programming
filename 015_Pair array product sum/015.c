#include <stdio.h>

int CountPairs (int *a, int n);

int CountPairs (int *a, int n){
    int count=0;
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if ((a[i] + a[j] < a[i]*a[j]) && (a[i] != a[j])){
                printf("(%d,%d)\t ",a[i],a[j]);
                count++;
            }
            
        }
    }
    return count;
    
}

int main(){
    int a[]={3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    printf(" \nnumber of pairs in array1 =%d", CountPairs (a,  n));
    
     int a1[]={3,3,3};
    printf(" \nnumber of pairs for array2 =%d", CountPairs (a1,  n));
    
}
