#include <stdio.h>//����������� ����������� ����������� �����-������
float ans(int a, int b) { //����������� ������� ans, ������������ �������� � ������� float � ����������� � ���� 2 �������� � �������
	return (float)a/b;
}
int main() {//�������� ������� main
	int x;//���������� ���������� ���� int
	int y;//���������� ���������� ���� Int
	printf("enter integer number 1:\n");//����� ��������� ��� ������������
	scanf_s("%d", &x);//���� � ���������� �������� ��� ���������� x
	printf("enter integer number 2:\n");//����� ��������� ��� ������������
	scanf_s("%d", &y);//���� � ���������� �������� ��� ���������� y
	printf("%f", ans(x, y));//����� �� ����� ���������� ������ ������� ans
	return 0;//������� �������� main ������ �����
}