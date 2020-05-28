/*У файлі записані координати матеріальних точок на площині задані парою цілих чисел та
масою(дійсне число). Точки записуються в форматі : [х1 , y1, m1 ], [х2 , y2, m2] ,  … - 
саме так через коми та квадратні дужки.  Знайдіть дві точки з найбільшим ричагом сили (m*(х +y)). */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    FILE* filepoint;
    char str[128];
    double max_arr[3];
    double max = 0;
    char* estr;
    errno_t err;
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
            printf("%s", str);
            for (int i = 0; i < 128; i++) {
                if (str[i] == 91) {
                    double x, y, m;
                    char temp_x[4];
                    char temp_y[4];
                    char temp_m[4];
                    int j1,j3;
                    for (int j = i + 1; j < 128; j++) {
                        if (str[j] == 44) {
                            j1 = j;
                            break;
                        }
                        temp_x[j - i - 1] = str[j];
                    }
                    for (int j2 = j1 + 1; j2 < 128; j2++) {
                        if (str[j2] == 44) {
                            j3 = j2;
                            break;
                        }
                        temp_y[j2 - j1 - 1] = str[j2];
                    }
                    for (int j4 = j3 + 1; j4 < 128; j4++) {
                        if (str[j4] == 93) {
                            break;
                        }
                        temp_m[j4 - j3 - 1] = str[j4];
                    }
                    char* ptr;
                    x = strtod(temp_x, &ptr);
                    y = strtod(temp_y, &ptr);
                    m = strtod(temp_m, &ptr);
                    double temp = m * (x + y);
                    if (temp > max) {
                        max = temp;
                        max_arr[0] = x;
                        max_arr[1] = y;
                        max_arr[2] = m;
                    }
                }
            }
        }
        printf("\nmax = %lf\n", max);
        for (int i = 0; i < 3; i++) {
            printf("%lf", max_arr[i]);
        }
        fclose(filepoint);
    }

}