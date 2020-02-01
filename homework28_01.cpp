#include <stdio.h>
int main(){
	int numb,numb_1,numb_2,hundreads,tenth;
	int i;
	printf("input of number\n");
	scanf_s("%d", &numb);
	numb_1 = numb % 100;//desiatki+edinitsy
	//printf("numb_1 = %d\n",numb_1);
	numb_2 = numb_1 % 10;//edinitsy
	//printf("numb_2 =%d\n", numb_2);
	hundreads = (numb - numb_1)/100;
	tenth = (numb_1 - numb_2)/10;
	printf("%d%d%d\n", hundreads, tenth, numb_2);
	printf("%d%d%d\n", tenth, hundreads, numb_2);
	printf("%d%d%d\n", numb_2, tenth, hundreads);
	printf("%d%d%d\n", hundreads, numb_2, tenth);
	printf("%d%d%d\n", numb_2, hundreads, tenth);
	printf("%d%d%d\n", tenth, numb_2, hundreads);
}