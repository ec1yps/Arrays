#include <iostream>
using namespace std;

//#define EXAMPLE
#define HOMEWORK

void main() {
	setlocale(LC_ALL, "");

#ifdef EXAMPLE
	const int SIZE = 5;
	int arr[SIZE];

	arr[2] = 2048;
	cout << arr[2] << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // EXAMPLE

#ifdef HOMEWORK
	const int SIZE = 5;
	int arr[SIZE], result = 0, min, max = 0;

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

	cout << "\nСреднее арифметическое значение элементов массива: " << result / SIZE << endl;

	min = arr[0];
	for (int i = 0; i < SIZE; i++)
		if (arr[i] < min) min = arr[i];
	cout << "\nМинимальный элемент массива: " << min << endl;

	for (int i = 0; i < SIZE; i++)
		if (arr[i] > max) max = arr[i];
	cout << "\nМаксимальный элемент массива: " << max << endl;
#endif // HOMEWORK

}