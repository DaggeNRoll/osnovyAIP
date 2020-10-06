#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "RUS");
	int i=0, j=0, n, arr[] = { 1,8,2,10,34,56,46,23 };
	printf_s("Массив до работы алгоритма: ");
	n = sizeof(arr) / sizeof(int);
	for (i = 0; i < n; i++) {
		printf_s("%d", arr[i]);
		printf_s(" ");
	}
	while (i < n - 1) {
		while (j < n - 1 - i) {
			if (arr[j] > arr[j + 1]) {
				int buf = j + 1;
				arr[j + 1] = arr[j];
				arr[j] = buf;
			}
			j++;
		}
		i++;
	}
	printf_s("Массив после работы алгоритма: ");
	for (i = 0; i < n; i++) {
		printf_s("%d", arr[i]);
		printf_s(" ");
	}
	return 0;
}