#include <stdio.h>
#include <string.h>
//, . ! ?
int main() {
	char m[] = "abdf,1qwfgwe,wqd.last";
	int len = strlen(m);
	char f_sym[] = "\.";
	char f2_sym[] = "\?";
	char f3_sym[] = "\!";
	char f4_sym[] = "\,";

	for (int j = 0; j < len; j++) {
		int loc_iter = j % 5;
		if (loc_iter == 5) {
			printf("\n");
		}
		else if ((m[j] == f_sym[0]) || (m[j] == f2_sym[0]) || (m[j] == f3_sym[0]) )
		{
			break;
		}
		else if (m[j] == f4_sym[0])
		{
			printf("\n");
		}
		else {
			printf("%c",m[j]);
		}
	}
}