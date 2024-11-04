#include<stdio.h>
#define MAXLINE 1000
void squeez_strs(char s1[], char s2[]);

int main(){
	char s1[MAXLINE] = "Hello I am Prakhar";
	char s2[MAXLINE] = "el";
	printf("The original line = %s\n",s1);
	squeez_strs(s1,s2);
	printf("The lines after squeez: %s\n",s1);
	printf("The s2 was: %s\n",s2);
	return 0;
}

void squeez_strs(char s1[], char s2[]){
	int i,j,k;
	for(i=0;s2[i]!='\0';i++){
		for(j=k = 0;s1[j] != '\0';j++)
			if(s1[j] != s2[i])
				s1[k++] = s1[j];
	printf("%s\n",s1);
		s1[k] = '\0';
	}
}
