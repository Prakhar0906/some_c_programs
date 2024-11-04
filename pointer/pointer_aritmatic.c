#include<stdio.h>

int main(){
	int a = 10;
	int *p;
	p = &a;

	printf("Address of p is %d\n",p);
	printf("size of integer is %d bytes\n",sizeof(int));
	printf("Address p+1 is %d\n",p+2);
	return 0;
}
