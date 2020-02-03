#include <stdio.h>
#include<math.h>
int main(){
	float v0, v1, v2, i, v3,sum,last_numb;
	printf("input of count max");
	scanf_s("%f", &last_numb);
	v0 = 0;
	v1 = 0;
	v2 = 3 / 2;
	v3 = 0;
	sum = 3/2;
	for (i = 2; i <= last_numb; i++) {
		v3 = (i - 2) / ((i - 3) * (i - 3) + 1) * v2 - v1 * v0 + 1;
		v0 = v1;
		v1 = v2;
		v2 = v3;
		sum += v3;
	}
	printf("last v3   %f\n", v3);
	printf("%f", sum);
}