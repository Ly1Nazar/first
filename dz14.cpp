#include <stdio.h>
#include <string.h>
/* ���������  ���������  ������  ����������  �����  �  ���������� 
����. ���� ����� ����� �����, ������ ������ �� ���. 
*/
int main() {
    FILE* filepoint;
    char str[128];
    char* estr;
    errno_t err;
    int max_elem = 0;
    char max_arr[128];
    err = fopen_s(&filepoint, "first.txt", "r");
    if ((err) != 0) {
        printf("err_4");
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
            printf("\nlen max %d %s\n", strlen(str),str);
            if (strlen(str)>max_elem){
                max_elem = strlen(str);
                for (int i = 0; i < 128; i++) {
                    max_arr[i] = str[i];
                }
            }
        }
    }
    printf("max %s %d",max_arr,max_elem );
    fclose(filepoint);
	return 0;
}