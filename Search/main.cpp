#include <iostream>
using namespace std;

#define tab "\t"

void main() {
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];

	//заполнение массива случайными числами и его вывод
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 8;
		cout << arr[i] << tab;
	}
	cout << endl;

	//проверка элементов на повторение и их подсчет, вывод результатов проверки
	for (int i = 0; i < n; i++) {
		int counter = 0;

		for (int j = i; j < n; j++)
			if (arr[i] == arr[j]) counter++;

		for (int j = 0; j < i; j++)
			if (arr[i] == arr[j]) counter = 0;
		
		if (counter > 1)
			cout << "Повторяющийся элемент: " << arr[i] << tab << "Количество повторений: " << counter << endl;
	}
}