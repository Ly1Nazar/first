#include <stdio.h>
#include <stdlib.h>
#include <cmath>

int av_day_input(int a) {
    unsigned int calc_numb;
    unsigned int* day_calc;
    int res = 0;
    printf("\nType number of calculus:\n");
    scanf_s("%d", &calc_numb);
    if (calc_numb == 0) {
        return 0;
    }
    day_calc = (unsigned*)malloc(calc_numb * sizeof(unsigned));
    for (int i = 0; i < calc_numb; i++) {
        printf("\n%d calculus during %d day", (i + 1), (a + 1));
        scanf_s("%d", &day_calc[i]);
        res += day_calc[i];
    }
    return (res / calc_numb);
}

int main() {
    int numb_days, numb_days_1;
    printf("Type number of days:");
    scanf_s("%d", &numb_days);
    if (numb_days < 0) {
        numb_days_1 = abs(numb_days);
    }
    else if(numb_days==0){
        return 0;
    }
    else {
        numb_days_1 = numb_days;
    }
    unsigned int* whole_av_inp;
    whole_av_inp = (unsigned*)malloc(numb_days_1 * sizeof(unsigned));
    for (int i = 0; i < numb_days; i++) {
        whole_av_inp[i] = av_day_input(i);
    }
    for (int j = 0; j < numb_days; j++) {
        printf("\n%d\n", whole_av_inp[j]);
    }
    return 0;
}
