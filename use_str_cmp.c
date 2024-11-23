#include<stdio.h>
#include<string.h>

int main(){	
	char string1[] = "apple";
	char string2[] = "orange";
	
	int result = strcmp(string1, string2);

	if(result == 0){
		printf("The strings are identiacl.\n");
	}else if(result > 0){
		printf("String 1 is greater than string 2.\n");
	}else {
		printf("String 1 is less than string 2.\n");
	}
	return 0;
}
