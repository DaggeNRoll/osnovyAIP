#include <stdio.h>
#include <locale.h>
#include <math.h>
void main() {
	setlocale(LC_ALL, "Rus");
	double f, b, s, a;
	printf_s("введите значение модуля магнитной индукции в Теслах: ");
	scanf_s("%lf", &b);
	printf_s("введите площадь плоского замкнутого контура в квадратных метрах: ");
	scanf_s("%lf", &s);
	printf_s("введите угол между нормалью к плоскости контура и направлением вектора магнитной индукции в радианах: ");
	scanf_s("%lf", &a);
	f = s * b * sin(a);
	printf_s("%lf", f);
}