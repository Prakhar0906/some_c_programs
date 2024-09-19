#include<stdio.h>

int main(){
	int num1,num2,a,b,r;
	printf("Please enter the number1: ");
	scanf("%d",&num1);
	printf("Please Entert the number 2: ");
	scanf("%d",&num2);
	if(num1 > num2){
			a = num1;
			b = num2;
		}
	else{
			a = num2;
			b = num1;
		}	
//	printf("%d>a %d>b\n",a,b);	
	while(1){
		r = a%b;
		if(r == 0){
			break;
		}
		a= b;
		b = r;
	}
	printf("The HCF of the two numbers is: %d\n",b);
		
	return 0;
}


