#include<stdio.h>

int read_line(char s[],int len);

#define MAXLINE 1000

int main(){
	char line[MAXLINE];
	int len,c;
	while((len = read_line(line,MAXLINE))>0){
		printf("the length of the line was:%d",len);
		printf("\n%s",line);
	}
	return 0;
}

int read_line(char s[],int len){
	int c,i;
	i = 0;
	while(i <(len-1) && (c = getchar()) != EOF && c != '\n'){
		s[i] = c;
		i++;
	}
	if(c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
				
	
