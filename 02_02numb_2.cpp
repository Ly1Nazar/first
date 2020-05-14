#include <stdio.h>
//shows number of changes of sign during input
int main() {
    int numb,next,count;
    numb = 0;
    count = 0;
    do {
        printf("enter value of number\n");
        scanf_s("%d", &next);
        if ((numb > 0 and next < 0) || (numb < 0 and next>0) ){
            count++;
        }
        numb = next;
    } while (next != 0);
    printf("sign changes %d times", count);
}
