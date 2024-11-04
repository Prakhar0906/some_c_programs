#include<stdio.h>
#include<string.h>
#define MAXLEN 1000

void itoa(int n, char s[],int pad);
void reverse(char s[]);

int main(){
	int n = 53;
	int pad = 4;
	char s[MAXLEN];
	printf("The Original number is:%d\n",n);
	itoa(n,s,pad);
	printf("The number after conversion is %s\n",s);
	return 0;
}

void itoa(int n, char s[],int pad){
	int i,sign,j;
	if((sign = n) < 0)
		n = -n;
	i=0;
	do{
		s[i++] = n%10 + '0';
	}while ((n /=10) > 0);
	if(sign < 0)
		s[i++] = '-';
	if(i < pad){
		for(j =0; j <pad-i;j++)
			s[j+i] = ' ';
	}	
	s[++j] = '\0';
	reverse(s);
}

void reverse(char s[]){
	int c,i,j;
	for(i=0,j=strlen(s)-1;i<j;i++,j--){
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}	
