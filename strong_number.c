#include<stdio.h>

int main(){
	int num;
	printf("Please enter the number: ");
	scanf("%d",&num);
	int p_num = num;
	
	int sum = 0;
	while(num != 0){
		int digit = num%10;
		
		int fact = 1;
		for(int i = 1;i<=digit;i++){
			fact *=i;
		}
		
		sum+=fact;
		num=num/10;
		}
	if(p_num == sum){
			printf("Strong number idhi\n");
		}

	return 0;
}	
