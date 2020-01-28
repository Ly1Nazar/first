#include <stdio.h>
#include <math.h>
//B option
/*
int main() {
	float x,result;
	printf("x = ");
	scanf_s("%f", &x);
	result = (sqrt(x * x + 1) - 1) / 2 + x;
	printf("result = %f", result);
}*/
//A OPTION
int main() {
	float x, result;
	printf("x = ");
	scanf_s("%f", &x);
	result = (exp(x) - exp(-x)) / (exp(x) + exp(-x));
	printf("result = %f", result);
}
