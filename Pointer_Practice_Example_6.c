#include <stdio.h>

void sort_strings(char* list[], int size)
{
	int i, j, least;
	char* temp;

	for (i = 0; i < size - 1; i++){
		least = i;
		for (j = i + 1; j < size; j++)
			if (strcmp(list[j], list[least]) < 0)
				least = j;

		temp = list[i];
		list[i] = list[least];
		list[least] = temp;
	}
}

int main(void)
{
	char* list[] = { "mycopy","src","dst" };
	sort_strings(&list, 3);

	for (int i = 0; i < 3; i++){
		printf("%s\n", list[i]);
	}
	return 0;
}
