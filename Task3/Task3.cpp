#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	printf_s("введите целое положительное число: ");
	int x, i, y;
	i = 2;
	scanf_s("%d", &x);
	printf_s("%d", x);
	printf_s(" = 1");
	while (x > 1) {
		while (x % i == 0) {
			printf_s("*%d", i);
			x /= i;
		}
		i++;
	}
}