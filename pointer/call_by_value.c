#include<stdio.h>

void Increment(int a){	
	a = a+1;
	printf("Address of variable a in increment = %d",&a);
}

int main(){
	int a;
	a = 10;
	Increment(a);

	printf("Address of variable a in main is = %d",&a);
//	printf("a = %d",a);
	return 0;
}
