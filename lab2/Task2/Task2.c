#include <stdio.h>
#include <math.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, "Rus");
	float a, b, c, d;
	printf_s("a(x)^2+bx+c=0\n");
	printf_s("������� ����������� a:");
	scanf_s("%f", &a);
	printf_s("������� ����������� b:");
	scanf_s("%f", &b);
	printf_s("������� ��������� ���� c: ");
	scanf_s("%f", &c);
	d = b * b - 4 * a * c;
	if (d > 0) {
		printf_s("x1= %f\n", (-b + sqrt(d)) / (2 * a));
		printf_s("x2= %f\n", (-b - sqrt(d)) / (2 * a));
	}
	else if (d == 0) {
		printf_s("x1=x2= %f", (-b) / (2 * a));
	}
	else {
		printf_s("�������������� ������ ���");
	}
}