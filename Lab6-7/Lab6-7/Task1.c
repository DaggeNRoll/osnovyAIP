#define k 1.247

int main() {
	int a[] = { 100,0,6,50,20,14,45,32,67 };//������������� �������
	int n = sizeof(a) / sizeof(int);//������ �������
	int step, i, temp;

	for (step = n-1; step >= 1; step/=k) {//������� ����
		for (int i = 0; i < n - step; i++) {//���������� ����
			if (a[i]>a[i+step]) {//������������ ���������
				temp = a[i];
				a[i] = a[i+step];
				a[i+step] = temp;
			}
		}
	}

	return 0;
}