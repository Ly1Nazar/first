#include <stdio.h>
#include <string.h>
//a change capital letters to small ones
//b reverse rewrite
int main()
{
    FILE* filepoint4;
    char str4[128];
    char res[128];
    char ch;
    errno_t err_4;
    int j3 = 0;
    err_4 = fopen_s(&filepoint4, "fisrt.txt", "r");
    if ((err_4) != 0) {
        printf("err_4");
    }
    else {
        if (filepoint4 == NULL) { printf("error1\n"); return -1; }
            fgets(str4, sizeof(str4)-1, filepoint4);
            printf("\ns =%s", str4);
        
    }
    fclose(filepoint4);
    for (int j = 0; j < 128-1; j++) {
        res[127 - j] = str4[j];
    }
    printf("\n");
    for (int j = 0; j < 128; j++) {
            if (res[j] >= 65 && res[j] <= 90) {
                res[j] = res[j] + 32;
            }
            printf("%c", res[j]);
    }
    err_4 = fopen_s(&filepoint4, "first.txt", "w");
    if ((err_4) != 0) {
        printf("err_4");
    }
    else {
        if (filepoint4 == NULL) { printf("error1\n"); return -1; }
        for (int i = 0; i < 128; i++) {
            fprintf(filepoint4, "%c", res[i]);
        }
    }
    return 0;
}