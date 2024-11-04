#include<stdio.h>

#define MAXLINE 1000
int mod_any(char s1[],char s2[]);

int main(){
	char s1[MAXLINE] = "HEllO I am Prakhar Shrivastav";
	char s2[MAXLINE] = "This is a Line";

	printf("the Line 1 is %s\n", s1);
	printf("The string 2 is %s\n",s2);
	printf("The found any location is: %d\n", mod_any(s1,s2));

	return 0;
}

int mod_any(char s1[], char s2[]){
	int i,j;
	for(i=0; s1[i] != '\0'; i++){
		for(j = 0;s2[j] != '\0';j++){
			if(s1[i] == s2[j] && s2[j] != ' ')
				return i;
		}
	}
	return -1;
}
