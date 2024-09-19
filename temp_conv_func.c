#include<stdio.h>
#define UPPER 300
#define LOWER 0
#define STEP 20
float temp(int fahr);

int main(){
	int fahr;

	for(fahr = LOWER;fahr <= UPPER; fahr+=STEP)
		printf("%3d %6.2f\n",fahr,temp(fahr));
	return 0;
}

float temp(int fahr){
	return (5.0/9.0)*(fahr - 32);
}
	

