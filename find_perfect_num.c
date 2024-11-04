#include<stdio.h>

int main(){
	int len;
	printf("Please enter the range to which we have to find the perfect numbers:");
	scanf("%d",&len);
	
	for(int i=1;i<=len;i++){
		int sum = 0;
		for(int j=1;j<=i/2;j++){
			if(i%j == 0){
				sum+=j;
			}
			}
	if(sum == i){
			printf("%d ",i);
		}
	
	}
	return 0;
}
