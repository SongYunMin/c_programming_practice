#include <stdio.h>

void set_max_ptr(int m[], int size, int** pmax)
{
	*pmax = m;
	for (int i = 0; i < size; i++) {

		if (**pmax < m[i]) {
			**pmax = m[i];
		}
	}
	printf("가장 큰 값은 %d\n", **pmax);
}

int main(void)
{
	int arr[6] = { 5,6,1,3,7,9 };
	int arr_len = sizeof(arr) / sizeof(arr[0]);
	int* pmax;

	set_max_ptr(arr, arr_len, &pmax);

	return 0;
}
