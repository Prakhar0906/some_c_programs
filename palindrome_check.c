#include<stdio.h>

int main(){
	int num,rev=0;
	
	printf("Please enter the number: ");
	scanf("%d",&num);
	while(num != 0){
		rev = rev*10 + (num % 10);
		num = num/10;
	}
	printf("The Reverse of the number is: %d\n",rev);
	if(num == rev){
		printf("The number is a palindrome\n");
	}
	else{
		printf("The number is not a palindrome\n");
	}
	return 0;
}
