//program To display all prime factors

#include<stdio.h>

int main(){
	int num;
	int curr = 2;

	printf("Please enter the number to find the prime factors of:");
	scanf("%d",&num);

	while(num != 1 && num > 0 && curr <= num){
		if(num%curr == 0){
			printf("%d,",curr);
			num/=curr;
			curr = 2;
		}
		else{
			curr+=1;
		}
	}
	printf("\n");
	return 0;
}
