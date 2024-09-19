#include<stdio.h>

#define TAB_STOP 8
#define MAXLINE 1000

int get_line(char s[], int len);
void shift_by(char line[],int index, int number_to_shift_by,int len);
int main(){
	char line[MAXLINE];
	int len;	
	while((len = get_line(line,MAXLINE)) > 0){
	//we have to shift every thing by 8 lines
	//	printf("The Len of the line is %d\n",len);
		for(int i = 0;i<len-1;i++){
			if(line[i] == '\t'){
			//	printf("Tab at index %d\n",i);
				line[i] = ' ';
				shift_by(line,i,TAB_STOP,len);
				printf("%s",line);	
			}
		}
	}
	return 0;
}

int get_line(char s[],int len){
	int c,i;
	for(i=0; i < len-1 && (c = getchar()) != EOF && c != '\n';i++)
		s[i] = c;
	if(c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}						 	

void shift_by(char line[], int index, int by,int len){
	int j;
	for(j = len;j>index;j--)
		line[j+by-1] = line[j];
	for(j = index;j < index+by;j++)
		line[j] = ' ';	
}	  
