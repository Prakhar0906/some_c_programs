#include<stdio.h>

#define MAXLINE 1000

int getlines(char line[], int maxline);
void copy(char to[], char from[]);

int main(){
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	
	max = 0;

	while((len = getlines(line,MAXLINE)) > 0){
		if(len > max){
			max = len;
			copy(longest,line);
		}
	}

	if(max>0){
		printf("%s",longest);
	}
	return 0;
}

int getlines(char line[], int maxline){
	int c,i;
	for(i = 0; i < maxline-1 &&(c= getchar())!=EOF && c != '\n' ;i++)
		line[i] = c;
	if (c == '\n'){
		line[i] = c;
		++i;
	}
	/*Note here there is a check for c == '\n' why?
	the reason for it is that is that if I end the program by EOF
	then the line length should be equal to 0 and there should be 
	appropriate thing so the cheif ending condition should satisfy*/
	line[i] = '\0';
	return i;
}
void copy(char to[] , char from[]){
	int i;
	
	i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
	}
