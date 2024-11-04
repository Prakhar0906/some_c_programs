#include<stdio.h>

int main(){
	int arr[] = {12,44,64,85,2,31,75,32,78,6,32};
	int len = sizeof(arr)/sizeof(arr[0]);
	printf("The Length of the array is: %d\n", len);
	for(int i = 0;i<len;i++){
		for(int j=1;j<len-i;j++){
			if(arr[j] < arr[j-1]){
				int temp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = temp;
			}
		}
		printf("The array after the pass is:\n");
		for(int k=0;k<len;k++){
			printf("%d ",arr[k]);
		}
		printf("\n");
	}
	return 0;
}	
