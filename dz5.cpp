#include <stdio.h>
#include <math.h>
//dz5 binary operations 
char calc(char a) {
	for (int i = 0; i < 7; i++) {
		char f = pow(2, i);
		if ((f & a) != 0) {
			printf("1");
		}
		else {
			printf("0");
		}
	}
	printf("\n");
	return 0;
}

char common_un(char a, char b) {
	char a1 = calc(a);
	char a2 = calc(b);
	char res = a&b;
	char a3 = calc(res);
	return res;

}


char invert(char a) {
	printf("invert = ");
	char res,res_1,sec_res;
	res = ~a;
	res_1 = ~a;
	int v = 128;
	for (int i = 1; i <= 8; i++)
	{
		if (res >= v)
		{
			printf("1");
			res -= v;
		}
		else
			printf("0");

		v /= 2;
	}
	printf("\n");
	return res_1;
}


int main() {
	char a = 15;
	char b = 1676;
	char res1 = common_un(a, b);
	char res2 = invert(b);
	printf("\ncommon_in= %d\n", res1);
	printf("\ninvert=  %d\n", res2);
}