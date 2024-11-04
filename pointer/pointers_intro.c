#include<stdio.h>

int main(){
	int a = 10;
	int *p;
	p = &a;
	printf("Address of P is %d\n",p);
	printf("Value at p is %d\n",*p);
	int b = 20;
	*p = b;
	printf("Address of P is %d\n",p);
	printf("Value at p is %d\n",*p);
	
	return 0;
}
