#include<stdio.h>

int h_to_i(char s[]);

int main(){
	return 0;
}

int h_to_i(char s[]){
	int n,i = 0,len = 0;
	while(s[i] != '\0'){
		len++;
		i++;
	}
	i=0;
	while(s[i] != '\0'){
		if(s[i] >= '0' || s[i] <='9'){
			n = n+(16^(len-i) * (s[i] - '0'));
	
