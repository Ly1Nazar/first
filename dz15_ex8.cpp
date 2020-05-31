#include <stdio.h>
#include <string.h>
#define N 14
void read_change() {
	FILE* given_ones;
	errno_t err;
	err = fopen_s(&given_ones, "given.txt", "r");
	int arr[N];
	int c = 0;
	int j = 0;
	fscanf_s(given_ones, "%d", &c);
	while (!feof(given_ones))
	{
		arr[j] = c;
		j++;
		fscanf_s(given_ones, "%d", &c);
	}
	arr[j] = c;
	fscanf_s(given_ones, "%d", &c);
	j++;
	arr[j] = c;
	fclose(given_ones);
	int pos_numb[N / 2];
	int neg_numb[(N / 2)];
	int pos_count = 0;
	int neg_count = 0;
	for (int l = 0; l < j; l++) {
		if (arr[l] < 0) {
			neg_count++;
			neg_numb[l-pos_count] = arr[l];
		}
		else {
			pos_count++;
			pos_numb[l-neg_count] = arr[l];
		}
	}
	FILE* temp;
	errno_t err1;
	err1 = fopen_s(&temp, "temporary.txt", "w");
	for (int l = 0; l < j / 2; l++) {
		fprintf(temp, "%d%s", pos_numb[l], " ");
	}
	fprintf(temp, "%s", "\n");
	for (int l = 0; l < j / 2; l++) {
		fprintf(temp, "%d%s", neg_numb[l], " ");
	}
	fclose(temp);
}
void a_func() {
	FILE* given_ones;
	errno_t err;
	err = fopen_s(&given_ones, "temporary.txt", "r");
	int arr[N];
	int pos_num[N / 2];
	int neg_num[N / 2];
	int c = 0;
	int j = 0;
	int pos_count = 0;
	int neg_count = 0;
	while (!feof(given_ones))
	{
		fscanf_s(given_ones, "%d", &c);
		if (c < 0) {
			neg_num[j - pos_count] = c;
			neg_count++;
		}
		else {
			pos_num[j - neg_count] = c;
			pos_count++;
		}
		arr[j] = c;
		j++;
	}
	printf("%d", j);
	fclose(given_ones);
	FILE* result;
	errno_t err1;
	err1 = fopen_s(&result, "result.txt", "w");
	for (int i = 0; i < j / 2; i++) {
		fprintf(result, "%d%s", pos_num[i], " ");
		fprintf(result, "%d%s", neg_num[i], " ");
	}
	fclose(result);
}

void b_func() {
	FILE* given_ones;
	errno_t err;
	err = fopen_s(&given_ones, "temporary.txt", "r");
	int arr[N];
	int pos_num[N / 2];
	int neg_num[N / 2];
	int c = 0;
	int j = 0;
	int pos_count = 0;
	int neg_count = 0;
	while (!feof(given_ones))
	{
		fscanf_s(given_ones, "%d", &c);
		if (c < 0) {
			neg_num[j - pos_count] = c;
			neg_count++;
		}
		else {
			pos_num[j - neg_count] = c;
			pos_count++;
		}
		arr[j] = c;
		j++;
	}
	printf("%d", j);
	fclose(given_ones);
	FILE* result;
	errno_t err1;
	err1 = fopen_s(&result, "result.txt", "w");
	for (int i = 0; i < j / 2; i++) {
		fprintf(result, "%d%s", pos_num[i], " ");
	}
	for (int i = 0; i < j / 2; i++) {
		fprintf(result, "%d%s", neg_num[i], " ");
	}
	fclose(result);
}
void c_func() {
	FILE* given_ones;
	errno_t err;
	err = fopen_s(&given_ones, "temporary.txt", "r");
	int arr[N];
	int pos_num[N / 2];
	int neg_num[N / 2];
	int c = 0;
	int j = 0;
	int pos_count = 0;
	int neg_count = 0;
	while (!feof(given_ones))
	{
		fscanf_s(given_ones, "%d", &c);
		if (c < 0) {
			neg_num[j - pos_count] = c;
			neg_count++;
		}
		else {
			pos_num[j - neg_count] = c;
			pos_count++;
		}
		arr[j] = c;
		j++;
	}
	printf("%d", j/2);
	fclose(given_ones);
	for (int i = 0; i < j / 2; i++) {
		printf("\n pos %d", pos_num[i]);
		printf("\n neg %d", neg_num[i]);
	}
	FILE* result;
	errno_t err1;
	err1 = fopen_s(&result, "result.txt", "w");
	for (int i = 0; i < (j / 2); i++) {
		int f = i + 1;
		printf("\ni = %d\n", i);
		fprintf(result, "%d ", pos_num[i]);
		printf("\npos_num = %d\n", pos_num[i]);
		fprintf(result, "%d ", pos_num[f]);
		printf("\npos_num +1 = %d\n", pos_num[f]);
		fprintf(result, "%d ", neg_num[i]);
		printf("\nneg_num = %d\n", neg_num[i]);
		fprintf(result, "%d ", neg_num[f]);
		printf("\npos_num = %d\n", neg_num[f]);
	}
	fclose(result);
}
int main() {
	//read_change();
	//a_func();
	//b_func();
	c_func();
}