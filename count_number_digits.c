#include<stdio.h>

int main(){
	int num,num_digits = 0;

	printf("Please Enter the number: ");
	scanf("%d",&num);
	while(num != 0){
		num = num/10;
		num_digits++;
	}
	printf("The number had %d digits\n",num_digits);
	return 0;
}
