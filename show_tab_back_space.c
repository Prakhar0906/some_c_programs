#include<stdio.h>

int main(){
	int c;

	while((c =getchar())!= EOF){
		if(c == 10){
			printf("\\b");
		}
		else if(c == '\t'){
			printf("\\t");
		}
		else if(c == 92){
			printf("\\"); 
		}
		else{
			printf("%d ",c);
		}
	}

	return 0;
}

