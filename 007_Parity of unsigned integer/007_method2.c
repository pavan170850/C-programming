#include <stdio.h>


//char* computeParity(int N) {
int computeParity(int N) {
    int count = 0;

    // Count the number of 1 bits in the binary representation of N
   /* while (N > 0) {
        if (N & 1) {
            count++;
        }
        N >>= 1;
    }*/
    
     while (N) {
            count+=(N&1);
     	    N >>= 1;
    }

   
   /* if (count % 2 == 0) {
        return "even";
    } else 
        return "odd";
    }
}*/

	(count % 2==0)? printf("even\n"):printf("odd\n");}

int main() {

   computeParity(11);

    return 0;
}

