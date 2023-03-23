#include <stdio.h>

int nth_term(int n){
	return (n*(n+1))/2;
}

int main(){
	printf(" %d\n ",nth_term(3));
}

