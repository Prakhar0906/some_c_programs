#include<stdio.h>
#define MAXLINE 1000

void itob(int n, char s[], int b);
void reverse(char s[]);
int main(){
	int n = 43;
	int b = 3;
	char s[MAXLINE];
	printf("The number n =%d\n",n);
	printf("The Base to be converted to n= %d",b);
	itob(n,s,b);
	printf("The Result after conversion is:- %s\n",s);
	return 0;
}

void itob(int n, char s[], int b){
	int que, rem=0,sign;
	int i = 0;
	que = 1;
	if(n < 0){
		s[i] = '-'; 
		n = -n;
		++i;
	}
	while(que != 0){
		que = n/b;
		rem = n - que*b;
		printf("The q:%d rem:%d \n",que,rem);
		if(rem > 9 && rem <16){
			s[i] = rem + 55;
		}else{
			s[i] = rem+'0';
		}
		n = que;
		i++;
	} 
	s[i] = '\0';
	reverse(s);
	printf("The str s is %s\n",s);
}

void reverse(char s[]){
	int len=0,i,temp;
	for(i=0;s[i]!='\0';i++);
	i--;
	printf("i is %d\n",i);
	for(len;len <i-len;len++){
		temp=s[len];
		s[len] = s[i-len];
		s[i-len] = temp;
		printf("reves %s\n",s);
	}
		
}	
