#define k 1.247//���������� ���������

int main() {
	int a[] = { 100,0,6,50,20,14,45,32,67 };
	int n = sizeof(a) / sizeof(int);//������ �������
	int step = n - 1;
	int i, temp;

	while (step >= 1) {
		i=0;//������������� ����������� ���������
		while (i < n - step) {
			if (a[i] > a[i + step]) {//������������ ���������
				temp = a[i];
				a[i] = a[i + step];
				a[i + step] = temp;
			}
			i++;//��������� ����������� ���������
		}
		step /= k;//���������� ���� � k ���
	}

	return 0;
}