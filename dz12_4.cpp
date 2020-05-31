#include <stdio.h>
#include <string.h>

int main() {
	FILE* first1;
	errno_t err;
	err = fopen_s(&first1, "first.txt", "r");
	char first[128];
	while (!feof(first1))
	{
		fgets(first, 126, first1);
		printf("%s", first1);
	}
	FILE* second;
	errno_t err1;
	err1 = fopen_s(&second, "second.txt", "r");
	char second2[128];
	int flag = 0;
	while (!feof(second))
	{
		fgets(second2, 126, second);
		printf("%s", second2);
	}
	for (int i = 0; i < 126; i++) {
		if (first[i] != second2[i]) {
			flag = 1;
			break;
		}
	}
	if (flag == 1) {
		printf("not equal");
	}
	else {
		printf("equal ");
	}
}