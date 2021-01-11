#include <stdio.h>

int main() {
	int i=1, temp, n, x, j, array[] = { 10,2,3,5,3,1 };
	n = sizeof(array) / sizeof(int);
	
	while(i<n) 
	{
		x = array[i];
		j = i;
		while (j > 0 && array[j - 1] > x) {
			temp = array[j-1];
			array[j - 1] = array[j];
			array[j] = array[j-1];
			j--;
		}
		i++;
	}

	for (i = 0; i < n; i++) {
		printf_s(" %i", array[i]);
	}

	return 0;
}
