#include<stdio.h>

#define MAXLINE 1000

int get_line(char line[],int len);
void revers(char s[],int len);

int main(){
	int len;

	char line[MAXLINE];

	while((len =get_line(line,MAXLINE)) > 0){
		revers(line,len);
		printf("%s",line);
	}
	return 0;
}

int get_line(char s[],int len){
	int c,i;

	for(i=0;i<len-1 && (c = getchar()) != EOF&& c != '\n';i++)
		s[i] = c;
	if(c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void revers(char s[],int len){
	int temp;
	len = len -2;
	for(int i =0 ;i<= len/2;i++){
		temp = s[i];
		s[i] = s[len - i];
		s[len - i]  = temp;
	}
}
		
	
