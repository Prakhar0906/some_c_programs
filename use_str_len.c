#include<stdio.h>
#include<string.h>

int main(){
	char a[20] = "Program";
	char b[20] = {'P','r','o','g','r','a','m'};
	
	printf("Length of string a = %zu \n",strlen(a));
	printf("Length of string b = %zu \n",strlen(b));
	
	return 0;
}
