#include<stdio.h>

int main(){
	int c;
	int len;
	int max;
	
	max = 0;
	len = 0;
	
	while((c = getchar()) != EOF){
		if(c != '\n'){
			len++;
			if(len > max){
				max = len;
			}	
		}
		else{
			len = 0;
		}
	}
	if(max > 0){
		printf("%d ",max);
	}
	return 0;
}
