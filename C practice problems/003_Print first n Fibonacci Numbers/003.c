#include <stdio.h>

int printFibb(int n) {
    
    if (n==0)
        return 0;
    else if (n ==1 )
        return 1;
    else 
        return printFibb( n-1) +printFibb( n-2); 
  
    
}

int main() {
    int n=10;
    for (int i=0;i<n;i++){
        printf("%d " ,printFibb(i) );
    }

    return 0;
}
