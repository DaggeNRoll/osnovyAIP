#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "RUS");
	int i, j, n, arr[] = { 1,8,2,10,34,56,46,23 };
	printf_s("Массив до работы алгоритма: ");
	n = sizeof(arr) / sizeof(int);
	for (i = 0; i < n; i++) {
		printf_s("%d", arr[i]);
		printf_s(" ");
	}
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int buf = j+1;
				arr[j+1] = arr[j];
				arr[j] = buf;
			}
		}
	}
	printf_s("Массив после работы алгоритма: ");
	for (i = 0; i < n; i++) {
		printf_s("%d", arr[i]);
		printf_s(" ");
	}
	return 0;
}