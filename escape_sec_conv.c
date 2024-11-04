#include<stdio.h>
#define MAXLINE 1000

void escape(char s[], char t[]);

int main(){
	int c,i;
	char line[MAXLINE];
	char to[MAXLINE];
	for(i=0; i < MAXLINE-1 && (c=getchar()) != EOF;i++){
		line[i] = c;
	}
	line[++i]='\0';	
	escape(line, to);
	printf("THe New text is: %s\n",to);
	return 0;
}

void escape(char s[], char t[]){
	int i = 0,j = 0;	
	while(s[i] != '\0'){
		switch (s[i]){
			case '\t':
				t[j] = '\\';
				t[++j] = 't';
				j++;
				break;
			case '\n':
				t[j] = '\\';
				t[++j] = 'n';
				j++;
				break;
			default:
				t[j++] = s[i];
				break;
		}
		i++;
	//	printf("The value of i is:%d and j is:%d\n",i,j);
	}
	t[++j] = '\0';
}
			
		
	
