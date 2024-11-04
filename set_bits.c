#include<stdio.h>


unsigned set_bits(unsigned x, int p, int n, unsigned y);

int main(){
	unsigned x = 8;
	unsigned y = 14;
	int p = 1, n = 2;
	printf("x = 0011 and y = 1010\n");
	printf("That in decimal is x:%d and y:%d\n",x,y);
	printf("The Result is: %d\n",set_bits(x,p,n,y));
	return 0;
}

unsigned set_bits(unsigned x, int p, int n, unsigned y){
	return x | ((y & ~(1 << n)) << p-1);
}


