#include <stdio.h>
#define N 3
//7e search of primes in array
int research(int a) {
    int flag = 1;
    for (int i = 0; i < a; i++) {
        if (a % i == 0) {
            flag = 0;
            break;
        }
    }
    return flag;
}



int main() {
    double arr[N];
    int counter = 0;
    for (int i = 0; i < N; i++) {
        printf("enter %d numb\n",i);
        scanf_s("%d\n", &arr[i]);
    }
    
    for (int i = 0; i < N; i++) {
        int a = arr[i];

        if (research(a) == 1) {
            counter++;
        }
    }
    printf("numb of prime in array %d\n", counter);
    return counter;
}
