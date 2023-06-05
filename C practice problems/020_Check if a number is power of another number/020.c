#include <stdio.h>

int isPowerOfAnother(int x, int y);

int isPowerOfAnother(int x,int y){

	if (x==1)
		return y==1? 1:0;
	
	int power=1;
	while(power <y){
	
		power*=x;
	}
	//returns 1 if x power of something equal to y ;else 0
	return power==y?1:0;
	
}

int main(){
	
	int x=3;
	int y=8;

	printf("%d \n ",isPowerOfAnother(x,y));
	
	}
	
	
	

	
