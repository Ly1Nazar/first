#include <stdio.h>
#include <math.h>

float th_x(float x) {
	float y;
	y = (exp(x) - exp(-x)) / (exp(x) + exp(-x));
	return y;
}
int main() {
	float x, d;
	printf("x = \n");
	scanf_s("%f", &x);
	d = th_x(x);
	printf("%f", d);

}