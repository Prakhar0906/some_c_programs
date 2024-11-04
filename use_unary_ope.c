#include<stdio.h>

int main(){
	int x = 5, y = 10;
	int result;

	printf("Unary Operator:\n");
	printf("Initial Value of x:%d\n",x);
	printf("Value after unary negation (-x):%d\n\n",-x);
	
	printf("Binary Operators:\n");
	printf("Initial Values: x = %d, y = %d\n",x,y);
	printf("Sum of x and y (x+y): %d\n\n",x+y);

	printf("Tenary operator:\n");
	result = (x>y) ? x : y;
	printf("Ternary operation result (x > y ? x : y): %d\n\n",result);
	return 0;
}
