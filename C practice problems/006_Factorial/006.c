#include <stdio.h>

int factorial(int n);

int factorial(int n){
    
    if (n<=1)
        return 1;
    else 
        return n*factorial(n-1);
    

}

int main(){
    int n=3;
    printf("%d ",factorial( n));
}
