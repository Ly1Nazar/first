#include <stdio.h>
#include <math.h>
float funky(float x) {
	float y,a;
	a = 10
	y = a*x;
	return y;
}
int main() {
	float x;
	printf("x = ");
	scanf_s("%f",&x);
	if (x < 0) {
		printf("%f",funky(x));
	}
	else {
		printf("%f", x);
	}
}
