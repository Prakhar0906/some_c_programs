#include<stdio.h>
#define INT_SIZE sizeof(int)
#define INT_BITS INT_SIZE * 8 -1
unsigned rightrot(int x,unsigned int n);

int main(){
	unsigned x = 10;
	int n = 3;
	printf("The value of x:%d and value of n:%d\n",x,n);
	printf("The value after right shift is:%d\n",rightrot(x,n));
	return 0;
}

unsigned rightrot(int x,unsigned int n){
	printf("%ld\n",INT_BITS);
	int DROPPED_MSB;
	n %= INT_BITS;
	printf("n is %d\n",n);
	while(n--){
		DROPPED_MSB = (x >> INT_BITS) & 1;
		x = (x<< 1)|DROPPED_MSB;
	}
	return x;
}
	
