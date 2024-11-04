#include<stdio.h>

int main(){
	double population, growthRate, time = 0, maxTime;
	printf("Enter the initial Population: ");
	scanf("%lf",&population);
	printf("Enter the growth rate (in percentage): ");
	scanf("%lf",&growthRate);
	printf("Enter the maximum time (in year): ");
	scanf("%lf",&maxTime);

	while( time <= maxTime){
		printf("Year %.2lf: Population = %.2lf\n",time, population);
		population +=population * (growthRate / 100);
		time +=1;
	}
	return 0;
}
			
