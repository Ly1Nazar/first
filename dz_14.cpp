#include <stdio.h>
#include <string.h>
/*1. Визначити функцію, що визначає кількість рядків текстового файла: 
а) починаються із заданого символу; 
б) закінчуються заданим символом; 
в) починаються й закінчуються одним і тим самим символом; 
г) складаються з однакових символів.
*/
int a_func() {
    //a - is letter for search
    char a = 't';
    FILE* filepoint;
    char str[128];
    char* estr;
    errno_t err;
    int counter = 0;
    err = fopen_s(&filepoint, "test.txt", "r");
    if ((err) != 0) {
        printf("err");
    }
    else {
        if (filepoint == NULL) { printf("error1\n"); return -1; }
        while (1)
        {
            estr = fgets(str, sizeof(str), filepoint);
            if (estr == NULL)
            {
                if (feof(filepoint) != 0)
                {
                    break;
                }
                else
                {
                    break;
                }
            }
            if (str[0] == a) {
                counter++;
            }
        }
        printf("%d", counter);
        fclose(filepoint);
        return counter;
    }
}
int b_func() {
    //a - is letter for search
    char a = 't';
    FILE* filepoint;
    char str[128];
    char* estr;
    errno_t err;
    int counter = 0;
    err = fopen_s(&filepoint, "test.txt", "r");
    if ((err) != 0) {
        printf("err");
    }
    else {
        if (filepoint == NULL) { printf("error1\n"); return -1; }
        while (1)
        {
            estr = fgets(str, sizeof(str), filepoint);
            if (estr == NULL)
            {
                if (feof(filepoint) != 0)
                {
                    break;
                }
                else
                {
                    break;
                }
            }
            if (str[strlen(str)-2] == a) {
                counter++;
            }
        }
        if (str[strlen(str) - 1] == a) {
            counter++;
        }

        printf("%d", counter);
        fclose(filepoint);
        return counter;
    }

}
int c_func() {
    FILE* filepoint;
    char str[128];
    char* estr;
    errno_t err;
    int counter = 0;
    err = fopen_s(&filepoint, "test.txt", "r");
    if ((err) != 0) {
        printf("err");
    }
    else {
        if (filepoint == NULL) { printf("error1\n"); return -1; }
        while (1)
        {
            estr = fgets(str, sizeof(str), filepoint);
            if (estr == NULL)
            {
                if (feof(filepoint) != 0)
                {
                    break;
                }
                else
                {
                    break;
                }
            }
            char a = str[0];
            char b = str[strlen(str)-2];
            if (a == b) {
                counter++;
            }

        }

    }
    printf("%d", counter);
    fclose(filepoint);
    return counter;

}
int d_func() {
    FILE* filepoint;
    char str[128];
    char* estr;
    errno_t err;
    int counter = 0;
    err = fopen_s(&filepoint, "test.txt", "r");
    if ((err) != 0) {
        printf("err");
    }
    else {
        if (filepoint == NULL) { printf("error1\n"); return -1; }
        while (1)
        {
            estr = fgets(str, sizeof(str), filepoint);
            if (estr == NULL)
            {
                if (feof(filepoint) != 0)
                {
                    break;
                }
                else
                {
                    break;
                }
            }
            char a = str[0];
            int flag = 1;
            for (int i = 0; i < strlen(str); i++) {
                if (str[i] != str[0]) {
                    flag = 0;
                }
            }
            counter += flag;
        }

    }
    printf("%d", counter);
    fclose(filepoint);
    return counter;

}

int main() {
	a_func();
	b_func();
	c_func();
	d_func();
}