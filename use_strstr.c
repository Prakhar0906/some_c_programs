#include<stdio.h>
#include<string.h>

int main(){
	
	char string[] = "Learning C programming is fun.";
	char substring[] = "programming";

	char *result = strstr(string, substring);
	
	if(result != NULL){
		printf("Substring found at position: %ld\n", result - string );
	}else{
		printf("Substring not found.\n");
	}
	return 0;
}
