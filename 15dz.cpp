#include <stdio.h>
#include <string.h>
//numb 7
/*Задано натуральне число n  та файл F,  компоненти якого є ці-
лими  числами.  Побудувати  файл  G,  записавши  до  нього  найбільше 
значення перших n компонент файла F, потім – наступних n компонент 
тощо. Розглянути два випадки:
а) кількість компонент файла ділиться на n; 
б) кількість компонент файла не ділиться на n. Остання компонента 
файла  g має  дорівнювати  найбільшій  із  компонент файла F,  які  утво-
рюють останню (неповну) групу. 
*/
void input() {
	FILE* file;
	errno_t err;
	err	= fopen_s(&file,"new.txt", "r");
	int i = 0;
	const int num = 2;//changable num to set devision
	int arr[14];
	int j = 0;
	fscanf_s(file, "%d", &i);
	while (!feof(file))
	{
		//printf("%d ", i);
		arr[j] = i;
		j++;
		fscanf_s(file, "%d", &i);
	}
	//printf("numb of comp %d", j);
	fclose(file);
	printf("\n");
	int max_arr[14];
	if (j % num == 0) {
		for (int u = 0; u < j; u+=num) {
			int temp_arr[num];
			int max = 0;
			for (int s = u; s <u+num; s++) {
				if (max < arr[s]) {
					max = arr[s];
					printf("\nmax %d\n", max);
				}
			}
			if (u != 0) { max_arr[j / u] = max; }
			else { max_arr[0] = max; }
		}
		for (int s = 0; s < j; s++) {
			printf("\nreasult max %d\n", max_arr[s]);
		}

	}
	else {
		for (int u = 0; u < j; u += num) {
			int temp_arr[num];
			int max = 0;
			for (int s = u; s < u + num; s++) {
				if (max < arr[s]) {
					max = arr[s];
					printf("\nmax %d\n", max);
				}
			}
			if (u != 0) { max_arr[j / u] = max; }
			else { max_arr[0] = max; }
		}
		for (int s = 0; s < j/num; s++) {
			printf("\nreasult max %d\n", max_arr[s]);
		}
	}
	int c1 = 0;
	FILE* filepoint;
	errno_t err1;
	err1 = fopen_s(&filepoint, "new.bin", "w");
	for (int с1 = 0; с1 < j; с1++) {
		fwrite(&max_arr[c1], sizeof(int), 1, filepoint);
	}
}
int main() {
	input();
}