#include<stdio.h>

int main(){
	int arr[] = {12,5,64,22,63,86,20};

	int item = 63;
	int len = sizeof(arr)/sizeof(arr[0]);
	
	for(int i = 0;i<len;i++){
		if(arr[i] == item){
			printf("The Item is at index: %d",i);
		}
	}
	return 0;
}
