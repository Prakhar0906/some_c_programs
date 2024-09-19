#include<stdio.h>

#define LIMIT 80
#define MAXLEN 1000

int get_line(char s[], int len);

int main(){
	int len;
	char line[MAXLEN];

	while((len = get_line(line,MAXLEN)) > 0){
		if(len > 80){
			printf("%s",line);
		}
	}
	return 0;
}

int get_line(char line[],int  len){
	int c,i;

	for(i = 0; i < len-1 && (c=getchar()) != EOF && c != '\n';i++){
		line[i] = c;
	}	
	
	if(c == '\n'){
		line[i] = c;
		i++;
	}	
	line[i] = '\0';

	return i;
}	
