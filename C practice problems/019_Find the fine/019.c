#include <stdio.h>
int totalFine(int n, int date, int car[], int fine[]);

int totalFine(int n, int date, int car[], int fine[]){
	
		int tfine=0;
		if (date %2 ==0){
			for(int i=0;i<n;i++){
				if (car[i]%2!=0)
					tfine+=fine[i];
			}
		}
		
		else{
			for(int i=0;i<n;i++){
				if (car[i]%2==0)
					tfine+=fine[i];
			}
		}
		return tfine;
		
			
}

int main(){
	
	int n = 3, date = 8,car[] = {2222, 2223, 2224},fine[] = {200, 300, 400};
	printf("%d ",totalFine(n,date,  car, fine));
	
}

	

	
					
					
		
			

