#include<stdio.h>

int binarysearch(int x, int v[],int n);

int main(){
	int list[] = {10,20,30,40,50,60,70,80,90,100};
	int len = sizeof(list)/sizeof(list[0]);
	printf("The Length of the list is:- %d\n",len);
	int element_to_search;
	printf("Here are the elements of the list:\n");
	for(int i=0;i<len;i++)
		printf("%d,",list[i]);
	printf("\n");	
	printf("Please enter the element to search: ");
	scanf("%d",&element_to_search);
	int index = binarysearch(element_to_search, list, len);
	if(index != -1){
		printf("The element is found at index: %d\n",index);
	}else{
		printf("The Element is not found\n");
	}
	return 0;
}

int binarysearch(int x, int v[],int n){
	int lower, high, mid;
	lower = 0;
	high = n-1;
	while(lower <= high){
		mid = (lower + high)/2;
		if(x < v[mid])
			high = mid-1;
		else if(x > v[mid])
			lower = mid + 1;
		else 
			return mid;
	}
	return -1;
}
