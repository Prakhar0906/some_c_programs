#include<stdio.h>

int bit_count(unsigned x);

int main(){
	int x = 10;
	printf("The value of x is %d\n",x);
	printf("The number of 1 bits is:%d\n",bit_count(x));
	return 0;
}

int bit_count(unsigned x){
	int b;
	for (b = 0;x!=0;x >>=1)
		if(x &01)
			b++;
	return b;
}
