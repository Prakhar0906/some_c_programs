#include<stdio.h>

int main(){
	printf("The Following program reads specified characters:\n");
	char c[100];
	//scanf("%s[list of characters to read], c);
	//scanf("%s10[^\n]",c); this will read everything except new line
	//below are exampleas of scanf
	scanf("%10[-123456789]",c); // will read only numbers
	scanf("%81[^\n]",c);//will read first 81 characters except all newlines
	scanf("%15[^~!@#$%^&*()_+]",c); //reads only non special chars
	scanf("%15[][0123456789]",c); // reads square bracket and the num
	return 0;
}
