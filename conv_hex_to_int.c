#include<stdio.h>
#include<math.h>

int h_to_i(char s[]);

int main(){
	char val[] = "0xf01aBb";
	printf("The int val of hex is %d\n",h_to_i(val));
	return 0;
}

int h_to_i(char s[]){
	if(!(s[0] == '0' && s[1] == 'x' || s[1] == 'X')){
		return -1;
	}
		
	int n=0,i = 0,len = 0;
	while(s[i] != '\0'){
		len++;
		i++;
	}
	i=2;
	while(s[i] != '\0'){
		if(s[i] >= '0' && s[i] <='9'){
			n = n+(pow(16,(len-i-1)) * (s[i] - '0'));
		}
		else if(s[i] >= 'A' && s[i] <= 'F'){
			printf("I ran\n");
			n = n+(pow(16,(len-i-1)) * (s[i] - '7'));
		}
		else if(s[i] >= 'a' && s[i] <= 'f'){
			n = n+( pow(16,(len-i-1))* (s[i] - 'W'));
		}
		i++;
	}
	return n;
}
	
	
