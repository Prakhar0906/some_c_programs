#include<stdio.h>

int main(){
	int arr[] = {10,20,30,40,50,60,70,80,90,100};
	
	int len = sizeof(arr)/sizeof(arr[0]);
	printf("The Initial array is:\n");
	for(int k = 0; k<len;k++){
		printf("%d ", arr[k]);
	}
	printf("\n");
	int l,r,m;
	int item = 100;
	l = 0;
	r = len;
	int found = 0;
	while(l <= r){
		m=(l+r)/2;
		if(arr[m] == item){
			printf("Item foune at index: %d\n",m);
			found = 1;
			break;
		}
		else if(item < arr[m]){
			r = m-1;
		}
		else if(item > arr[m]){
			l = m+1;
		}
	}
	if(!found){
		printf("The Value is not found\n");
	}
	return 0;
}
	
		
		
				
