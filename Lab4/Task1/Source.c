#include <stdio.h>//ввод-вывод
#include <locale.h>//Локализация
int main() {
	setlocale(LC_ALL, "RUS");
	int i, j, n, arr[] = { 1,8,2,10,34,56,46,23 };
	//объявление переменных и динамического массива
	n = sizeof(arr) / sizeof(int);//определение
	//размера массива
	for (i = 0; i < n - 1; i++) {
		//основной проход по массиву
		for (j = 0; j < n - 1 - i; j++) {
//внутренний проход по элементам, обеспечивающий
//их сравнение и перестановку (при надобности)
			if (arr[j] > arr[j + 1]) {
				int buf = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = buf;
			}
		}
	}
	for (i = 0; i < n; i++) {
		printf_s("%d", arr[i]);
		printf_s(" ");
	}
	return 0;
}