#include<stdio.h>

int main(){
	int chars[26];
	int c;

	for(int i = 0; i<26;i++)
		chars[i] = 0;
	
	while((c = getchar()) != EOF){
		if( c >= 'a' && c <= 'z'){
			++chars[c - 'a'];
		}
	}
	
	for(int i = 0;i<26;i++){
		printf("%c |", i+'a');
		for(int j = 0;j<chars[i];j++)
			printf("#");
		printf("\n");
	}	
	return 0;
}
