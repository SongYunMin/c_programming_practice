#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	FILE *fp_1, *fp_2;
	int arr_len = 1;	// 아래 for문 조건을 피하기 위해
	char f_1[100], f_2[100], Save_1[100], Save_2[100];
	printf("First File Name : "); scanf("%s", f_1);
	printf("Second File Name : "); scanf("%s", f_2);

	fp_1 = fopen(f_1, "r");
	fp_2 = fopen(f_2, "r");

	
	if (fp_1 == NULL || fp_2 == NULL) {
		printf("Failed to open File\n");
	}
	else {
		printf("File Open Successful\n");
	}
	

	while (fgets(Save_1, 100, fp_1) != NULL) {}
	while (fgets(Save_2, 100, fp_2) != NULL) {}


	if (strcmp(Save_1, Save_2) == 0) {
		printf("The two Files are the Same.\n"); // 두 파일은 같다
	} else {
		for (int i = 0; i < arr_len; i++) {
			arr_len = strlen(Save_1);
			printf("%c", Save_1[i]);
		}
		printf("\n");
		for (int i = 0; i < arr_len; i++) {
			arr_len = strlen(Save_2);
			printf("%c", Save_2[i]);
		}
	}
	
	fclose(fp_1);
	fclose(fp_2);

	return 0;
}