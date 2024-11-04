#include<stdio.h>
#define MAXLINE 1000
int get_line(char s[], int len);
int strindex(char s[], char pattern[],int len,int patlen);
int getlen(char s[]);
char pattern[] = "ould";
int main(){
	char s[MAXLINE];
	int found = 0;
	int len;
	
	int patternlen = getlen(pattern);
	while((len=get_line(s,MAXLINE)) > 0){
		if((found = strindex(s, pattern,len,patternlen)) > 0){
			printf("%s : at index %d",s,found);
			}
	}
	return 0;
}
int getlen(char s[]){
	int i;
	for(i=0;s[i] != '\0';i++);
	return i;
}

int get_line(char s[], int len){
	int i,c;
	for(i=0;i<len-1 && (c=getchar()) != EOF && c != '\n';i++)
		s[i]= c;
	if(c == '\n'){
		s[++i] = '\0';
	}
	return i;
}

int strindex(char s[], char pattern[],int len, int patternlen){
	int i,k,j;
	for(i=len;i != 0;--i){
		for(j=patternlen-1,k=i;j != 0 && s[k] == pattern[j];j--,k--){
		}
		if(k != i && j != patternlen)
			return i;
	}
	return -1;
}
			
