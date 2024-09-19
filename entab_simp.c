#include<stdio.h>
#define TAB_BLANK 8
#define IN 1
#define OUT 0
int main(){
	int nblank = 0,n_tab = 0,c;

	while((c = getchar()) != EOF){
		if(c == ' '){
			nblank++;
		}
		else{
			if(nblank > 1){
			for(int i=0;i < (nblank / 8);i++)
					putchar('\t');
				for(int i=0;i< (nblank%8);++i)
					putchar(' ');
				nblank = 0;
			}
			else if(nblank == 1){
				nblank = 0;
				putchar(' ');
			}
			putchar(c);
		}
		
	}
	return 0;
}
