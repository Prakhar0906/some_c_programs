#include<stdio.h>

int main(){
	int num,dig;

	printf("Please Enter the number to find the factorial of: ");
	scanf("%d",&num);

	while(num != 1){
		dig =2;
		while(dig <=num){
			if(num%dig == 0){
				num = num/dig;
				printf("%d,",dig);
				break;
			}
			else{
				dig++;
			}
		}
	}
	printf("\n");
	return 0;
}

		
