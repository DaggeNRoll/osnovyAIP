#include <stdio.h>
#include <math.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, "RUS");
	float a, b, c, d, x1, x2, s;
	printf_s("a(x)^2+bx+c=0\n");
	printf_s("введите коэффициент a!=0:");
	scanf_s("%f", &a);
	printf_s("введите коэффициент b:");
	scanf_s("%f", &b);
	printf_s("введите свободный член c: ");
	scanf_s("%f", &c);
	d = b * b - 4 * a * c;
	if (d > 0) {
		if (modff(sqrt(d), &s) == 0) {
			printf_s("x1= %f\n", (-b + sqrt(d)) / (2 * a));
			printf_s("x2= %f\n", (-b - sqrt(d)) / (2 * a));
		}
		else {
			printf_s("x1= (%f", -b);
			printf_s(" + sqrt(%f", d);
			printf_s(")) / %f", 2 * a);
			printf_s("\nx1= (%f", -b);
			printf_s(" - sqrt(%f", d);
			printf_s(")) / %f", 2 * a);
		}
	}
	else if (d == 0) {
		printf_s("x1=x2= %f", (-b) / (2 * a));
	}
	else {
		printf_s("Действительных корней нет");
	}
}