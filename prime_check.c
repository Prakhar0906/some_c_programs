#include<stdio.h>

int main(){
	int num,dig = 2;

	printf("Please enter the number to check: ");
	scanf("%d",&num);

	while(dig < num){
		if(num == 1){
			printf("The number is nither prime nor composit\n");
			break;
		}
		if((num%dig) == 0){
			printf("The number is not prime\n");
			num = 0;
			break;
		}
		printf("%d %d\n",dig,num);
		dig++;
	
	}
	if(num != 0){
		printf("The number is prime\n");
	}
	
	return 0;
}
		
