#include<stdio.h>

unsigned int invert(unsigned x, int p, int n);

int main(){
	unsigned x = 10;
	int p = 2, n = 3;
	printf("x=%d and p=%d and n=%d\n",x,p,n);
	printf("The result is %d\n",invert(x,p,n));

	return 0;
}

unsigned int invert(unsigned x, int p, int n){
	printf("%d\n",(~(1<<n) << p-1));
	return x ^ ((~(1<<n)) << p-1);
}
