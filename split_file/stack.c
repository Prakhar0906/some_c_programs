#include<stdio.h>
#include"calc.h"
#define MAXVAL 100
int sp = 0;
double val[MAXVAL];

double pop(void){
	if(sp > 0)
		return val[--sp];
	else{
		printf("error: stack empty\n");
		return 0.0;
	}
}

void push(double f){
	if(sp < MAXVAL)
		val[sp++] = f;
	else 
		printf("error: stack full, cant push %g\n",f);
}	
