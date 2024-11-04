#include<stdio.h>
#include<math.h>
int bin_to_dec(int bin);

int main(){
	int bin = 10010101;
	printf("The binary is: %d\n",bin);
	printf("The decimal is: %d\n",bin_to_dec(bin));
	return 0;
}

int bin_to_dec(int bin){
	int sum=0;
	int i = 0;
	while(bin != 0){
		int val = bin %10;
		sum+= val*pow(2,i);
		printf("val is %d and i is %d and sum is %d\n",val, i, sum);
		i++;
		bin = bin/10;
	}
	return sum;
}
