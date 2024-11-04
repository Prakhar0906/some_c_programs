#include<stdio.h>

int main(){
	int arr[] = {12,53,6,42,31,86,32,86,45,65};

	int len = sizeof(arr)/sizeof(arr[0]);
	
	for(int i = 0; i<len;i++){
		int min_index = i;
		for(int j=i;j<len;j++){
			if(arr[j] < arr[min_index])
				min_index = j;
		}
		if(min_index != i){
			int temp = arr[i];
			arr[i] = arr[min_index];
			arr[min_index] = temp;
		}
		printf("The array after swapping is:\n");
		for(int i = 0;i<len;i++){
			printf("%d ",arr[i]);
		}
		printf("\n");
	}
	return 0;
}
