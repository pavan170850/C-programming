#include <stdio.h>
#include <stdbool.h>

bool isprime(int n){
	if (n<=1)
		return false;
	for (int i=2;i*i<=n;i++){
	
		if (n%i==0)
			return false;
	}
	return true;
	
}

int main(){
	int n=10;
	for (int i=2;i<=n;i++){
	
		if (isprime(i))
			printf("%d ",i);
	}
	printf("\n");
	
}
	
			
