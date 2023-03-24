#include <stdio.h>

int maximum_Cuts(int n){
	return ((n*(n+1))/2)+1;
}

int main(){
	printf("%d \n",maximum_Cuts(3));
}
