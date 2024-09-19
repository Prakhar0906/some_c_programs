#include<stdio.h>

int main(){
	int num, pow,res;
	
	printf("Please enter the number: ");
	scanf("%d",&num);
	
	printf("Please enter the power: ");
	scanf("%d",&pow);
	res =1;
	while(pow>0){
		res*=num;
		pow--;
	}
	printf("The result is: %d\n",res);
	return 0;
}
