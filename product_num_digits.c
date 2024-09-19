#include<stdio.h>

int main(){
	int num,prod;

	printf("Please enter the number: ");
	scanf("%d",&num);
	prod = 1;
	if(num != 0){
	while(num != 0){
	prod = prod*(num%10);
	num = num/10;
	}
	}
	else{
		printf("The Product of the digits is: 0\n");
	}
	printf("The Product of the digits of the number is %d\n",prod);
	return 0;
}
	
