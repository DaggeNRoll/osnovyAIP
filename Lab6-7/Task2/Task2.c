#define k 1.247//объявление константы

int main() {
	int a[] = { 100,0,6,50,20,14,45,32,67 };
	int n = sizeof(a) / sizeof(int);//размер массива
	int step = n - 1;
	int i, temp;

	while (step >= 1) {
		i=0;//инициализация внутреннего итератора
		while (i < n - step) {
			if (a[i] > a[i + step]) {//перестановка элементов
				temp = a[i];
				a[i] = a[i + step];
				a[i + step] = temp;
			}
			i++;//инкремент внутреннего оператора
		}
		step /= k;//уменьшение шага в k раз
	}

	return 0;
}