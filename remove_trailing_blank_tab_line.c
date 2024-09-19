#include<stdio.h>

#define MAXLINE 1000
int get_line(char s[], int len);

int main(){
	char line[MAXLINE];

	int len,i;
	while((len = get_line(line,MAXLINE)) > 0){
		if ( len > 1){
			for(i = len;line[i] == '\t' || line[i] == ' ';i--)
				line[i]=0;
			line[i+1] = '\0';
			printf("%s",line);
		}
	}
	return 0;
}

int get_line(char s[], int len){
	int c,i;
	for(i=0; i < len-1 && (c = getchar()) != EOF && c != '\n';++i){
		s[i] = c;
	}
	if(c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
	
