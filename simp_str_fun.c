#include<stdio.h>

int strlength(char s[]){
	int i;
	i = 0;
	while(s[i] != '\0')
		++i;
	return i;
}

int a_to_i(char s[]){
	int i,n;
	
	n = 0;
	for(i=0;s[i] >= '0' && s[i] <= '9';++i){
		n = 10*n+(s[i] - '0');
	}
	return n;
}

int Lowe(int c){
	if(c >='A' && c <='Z')
		return c + 'a' - 'A';
	else
		return c;
}

unsigned long int next = 1;

int Rand(void){
	next = next * 113515245 + 12345;
	return (unsigned int)(next / 65536) % 32768;
}

void sRand(unsigned int seed){
	next = seed;
}
// deleat all c from s
void sqeeze(char s[],int c){
	int i,j;

	for(i=j=0;s[i] != '\0';i++)
		if(s[i]!=c)
			s[j++] = s[i];
	s[j] = '\0';

}

void strcast(char s[], char t[]){
	int i,j;
	i = j = 0;

	while(s[i] != '\0')
		i++;
	while((s[i++] = t[j++]) != '\0')
			;
}
