#include <stdio.h>
#include <locale.h>
#include <math.h>
void main() {
	setlocale(LC_ALL, "Rus");
	double f, b, s, a;
	printf_s("������� �������� ������ ��������� �������� � ������: ");
	scanf_s("%lf", &b);
	printf_s("������� ������� �������� ���������� ������� � ���������� ������: ");
	scanf_s("%lf", &s);
	printf_s("������� ���� ����� �������� � ��������� ������� � ������������ ������� ��������� �������� � ��������: ");
	scanf_s("%lf", &a);
	f = s * b * sin(a);
	printf_s("%lf", f);
}