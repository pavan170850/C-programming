#include <stdio.h>
#include <string.h>
# define MOD 1000000007

int chartodig(char ch)
{
	printf("%c",(ch-'0'));
	return (ch-'0');
}

int sumofsubstr(char *num){
	int n=strlen(num);
	int sumofdig[n];

	sumofdig[0]=chartodig(num[0]);
	int res= sumofdig[0];

	for (int i=1; i<n;i++)
	{
		int numi=chartodig(num[i]);

		sumofdig[i]=(i+1)*numi + 10* sumofdig[i-1];
		
		res+=sumofdig[i];
	}

	return res ;
}

int main(){

	char *num = "1234";
	int  mod =sumofsubstr(num) % MOD ;
	printf("sum of all substrings = %d \n", mod );
}
