#include <stdio.h>
#define N 3
int research(int a) {
    int flag = 1;
    for (int i = 0; i < a/2; i++) {
        if (a % i == 0) {
            flag = 0;
            break;
        }
    }
    return flag;
}

int check(double arr[N]) {
    int counter = 0;
    for (int i = 0; i < N; i++) {
        int a = arr[i];

        if (research(a) == 1) {
            counter++;
        }
    }
    return counter;
}

int main() {
    double arr[N];
    for (int i = 0; i < N; i++) {
        printf("enter %d numb\n",i);
        scanf_s("%d\n", &arr[i]);
    }
    int res = check(arr);
    printf("numb of prime in array %d\n", res);
    return 0;
}
