#include <stdio.h>

#define k 1.247

int main() {
	int a[] = { 100,0,6,50,20,14,45,32,67 };
	int n = sizeof(a) / sizeof(int);

	for ( int step = n-1; step > 0; step/=k) {
		for (int j = 0; j < n - step; j++) {
			if (a[j]>a[j+step]) {
				int temp = a[j];
				a[j] = a[j+step];
				a[j+step] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		printf_s("%d\n", a[i]);
	}

	return 0;
}