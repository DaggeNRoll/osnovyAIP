#include <stdio.h>

int main() {
	int i, j, x, n, array[] = { 10,2,3,5,3,1 };
	n = sizeof(array) / sizeof(int);

	for (i = 1; i < n; i++) {
		for (j = i, x = array[i]; j > 0 && array[j - 1] > x; j--) {
			array[j] = array[j-1];
		}
		array[j] = x;
	}

	for (i = 0; i < n; i++) {
		printf_s(" %i", array[i]);
	}

	return 0;
}