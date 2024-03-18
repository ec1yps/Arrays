#include <iostream>
using namespace std;

#define EXAMPLE
//#define HOMEWORK

#define tab "\t"

void main() {
	setlocale(LC_ALL, "");

#ifdef EXAMPLE
	const int SIZE = 5;
	int arr[SIZE];

	/*arr[2] = 2048;
	cout << arr[2] << endl;*/

	cout << "Введите элементы массива: ";
	for (int i = 0; i < SIZE; i++) {
		cin >> arr[i];
	}

	// Вывод массива на экран в прямом порядке:
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << tab;
	}
	cout << endl;

	// Вывод массива на экран в обратном порядке:
	for (int i = SIZE - 1; i >= 0; i--) {
		cout << arr[i] << tab;
	}
	cout << endl;

	// Вычисление суммы элементов массива:
	int sum = 0;
	for (int i = 0; i < SIZE; i++) {
		sum += arr[i];
	}
	cout << "Сумма элементов массива: " << sum << endl;
	cout << "Среднее арифметическое: " << (double)sum / SIZE << endl;

	// Поиск и минимального и максимального значения в масисве:
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++) {
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение в массиве: " << min << endl;
	cout << "Максимальрное значение в массиве: " << max << endl;
#endif // EXAMPLE

#ifdef HOMEWORK
	const int SIZE = 5;
	int arr[SIZE], result = 0, min, max;

	for (int i = 0; i < SIZE; i++) {
		cout << "Введите " << i + 1 << "-й элемент массива: "; cin >> arr[i];
	}
	cout << "\nЭлементы массива в прямом порядке: ";

	for (int i = 0; i < SIZE; i++)
		cout << "\t" << arr[i];
	cout << "\n\nЭлементы массива в обратном порядке: ";

	for (int i = SIZE - 1; i >= 0; i--)
		cout << "\t" << arr[i];
	cout << endl;

	for (int i = 0; i < SIZE; i++)
		result += arr[i];
	cout << "\nСумма элементов массива: " << result << endl;

	cout << "\nСреднее арифметическое значение элементов массива: " << (double)result / SIZE << endl;

	min = arr[0];
	max = arr[0];
	for (int i = 0; i < SIZE; i++) {
		if (arr[i] < min) min = arr[i];
		if (arr[i] > max) max = arr[i];
	}
	cout << "\nМинимальный элемент массива: " << min << endl;	
	cout << "\nМаксимальный элемент массива: " << max << endl;
#endif // HOMEWORK

}