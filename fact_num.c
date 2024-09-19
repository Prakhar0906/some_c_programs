#include<stdio.h>

int main(){
	int num,fac = 1;

	printf("Please enter the number to find the factorial of: ");
	scanf("%d",&num);

	while(num > 0){
		fac*=num;
		num--;
	}
	printf("The Number's factorial is: %d\n",fac);
	return 0;
}
	
