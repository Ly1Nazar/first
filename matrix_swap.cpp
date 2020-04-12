#include <stdio.h>
#include <math.h>
#define N 100
#define M 100


double swap(double* xp, double* yp)
{
	double temp = *xp;
	*xp = *yp;
	*yp = temp;
	return 0;
}

// A function to implement bubble sort 
void bubbleSort(double arr[], int m)
{
	int i, j;
	for (i = 0; i < m - 1; i++)

		// Last i elements are already in place    
		for (j = 0; j < m - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
}

int switch_col(double* marked,int m, double a[N][M],int n) {
	double tempor[N][M];
	for (int i = 0; i < m; i++) {
		int position = marked[i];
		for (int j = 0; j < n; j++) {
			tempor[j][i] = a[j][position];
		}
	}
	for (int i = 0; i < m; i++) {
		printf("\n");
		for (int j = 0; j < n; j++) {
			printf("%lf",tempor[i][j]);
		}
	}
	return 0;
}


int swap(double a[N][M],int n,int m,double x[N]) {
	double copy_x[N];
	//i have two arrays copy x stores original array &x aftrer func bublesort sorted numbers
	for (int i = 0; i < m; i++) {
		copy_x[i] = x[i];
	}
	bubbleSort(x, m);
	for (int i = 0; i < m; i++) {
		printf("x =%lf", x[i]);
	}
	double marked_list[N];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			if (x[i] == copy_x[j]) {
				marked_list[j] = i;
			}
		}
	}
	for (int i = 0; i < m; i++) {
		printf("marked list\n");
		printf("%lf", marked_list[i]);
	}
	switch_col(marked_list, m, a,n);
	return 0;


}


int matrix_min_col(double a[N][M], int n, int m) {
	//running through collumns
	double x[N], min;
	//i - arrays, j - col
	for (int i = 0; i < m; i++) {
		min = a[0][i];
		for (int j = 0; j < n; j++) {
			if (a[j][i] < min) {
				min = a[j][i];
			}
		}
		x[i] = min;
	}
	for (int i = 0; i < n; i++) {
		printf("\n x = %lf ", x[i]);
	}
	swap(a, n, m, x);
	return 0;
}


int matrix_inp(int n,int m,double a[N][M]) {
	int b;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("row=%d column=%d input value\n", i, j);
			scanf_s("%d", &b);
			a[i][j] = b;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%lf ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}


int main() {
	int n, m ;
	printf("number of arrays =");
	scanf_s("%d", &n);
	printf("number of columns =");
	scanf_s("%d", &m);
	double a[N][M];
	matrix_inp(n, m, a);
	matrix_min_col(a,n,m);

}