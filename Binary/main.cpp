#include <iostream>
using namespace std;

void main() {
	setlocale(LC_ALL, "");

	int n;
	cout << "Введите десятичное число: "; cin >> n;

	const int SIZE = 32;
	int arr[SIZE], k = 1, m = n, l = n;

	while (l > 1) {
		l /= 2;
		k++;
	}
	
	for (int i = k; i > 0; i--) {
		arr[i - 1] = m % 2;
		m /= 2;
	}

	cout << "Десятичное число " << n << " равно двоичному числу ";
	for (int i = 0; i < k; i++)
		cout << arr[i];
}