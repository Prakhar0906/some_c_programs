#include<stdio.h>
#define OUT 0
#define IN 1

int main(){
	int c,state,wlength;
	state = OUT;
	wlength = 0;
	while((c=getchar()) != EOF){
		if(c == ' ' || c == '\t' || c == '\n'){
			if(state == IN){	
				state = OUT;
				printf(" |");
				for(int i = 0;i<wlength;++i)
					printf("#");	
				wlength = 0;
				printf("\n");
		}		
		}
		else{
			state = IN;
			wlength++;
			putchar(c);
		}
	}
	return 0;
}
			
			
	
