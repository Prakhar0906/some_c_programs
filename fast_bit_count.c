#include<stdio.h>

int fast_bit_count(unsigned x);

int main(){
	int x = 15;
	printf("The Numeric value of x is %d\n",x);
	printf("The number of 1s in x is:%d\n",fast_bit_count(x));
	return 0;
}

int fast_bit_count(unsigned x){
	int b=0;
	while(x!=0){
		x&=(x-1);
		b++;
	}
	return b;
}	
