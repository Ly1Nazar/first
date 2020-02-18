#include<stdio.h>
int check(int numb) {
    int i,sum_i;
    sum_i = 0;
    for (i = 1; i <= numb-1; i++)
    {
        if (numb % i == 0) {
            sum_i += i;
        }
        //printf("sum_i%d", sum_i);
    }
    if (sum_i == numb) {
        printf("number %d ideal\n", numb);
    }
    else {
        printf("not ideal %d\n", numb);
    }
    return 0;
}
int main() {
    int numb;
    do {
        printf("\nenter value of number\n");
        scanf_s("%d", &numb);
        printf("%d", check(numb));
    } while (numb != 0);
}