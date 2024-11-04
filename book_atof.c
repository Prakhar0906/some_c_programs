#include<stdio.h>
#include<ctype.h>
#define MAXLINE 100

int get_line(char line[], int max);
double atof(char s[]){
	double val,power;
	int i, sign,exp_sign=1,exp;
	
	for(i=0; isspace(s[i]);i++);
	
	sign = (s[i] == '-') ? -1 : 1;
	if(s[i] == '+' || s[i] == '-')
		i++;
	for( val = 0.0;isdigit(s[i]);i++)
		val = 10.0 * val + (s[i] - '0');
	if(s[i] == '.')
		i++;
	for(power = 1.0; isdigit(s[i]);i++){
		val = 10.0 * val + (s[i] - '0');
		power *= 10.0;
	}
	if(s[i] == 'e' || s[i] == 'E'){
//		printf("e is detected\n");
		i++;
	
	if(s[i] == '-' || s[i] == '+'){
//		printf("The sign is detected\n");
		exp_sign = (s[i] == '-') ? -1:1;
		i++;
	}
	exp = 0;
	for(power; isdigit(s[i]);i++){
		exp = exp*10 + (s[i] - '0'); 	
	}
	if(exp_sign == -1){
		for(int t=0;t<exp;t++){
			power*=10.0;
		}
	}else{
		for(int t=0;t<exp;t++)
			power/=10.0;
	}
	}	
	return sign * val /power;
}

int get_line(char s[], int len){
	int i,c;
	for(i=0; i<len-1 && (c=getchar()) != EOF && c != '\n';i++)
		s[i] = c;
	if(c == '\n')
		s[i++] = '\n';
	s[i] = '\0';
	return i;
}	

int main(){
	double sum , atof(char []);
	char line[MAXLINE];

	sum = 0;
	while(get_line(line, MAXLINE) >0)
		printf("\t%g\n",sum += atof(line));
	return 0;
}


