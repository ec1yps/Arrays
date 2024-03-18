#include <iostream>
using namespace std;

#define tab "\t"

void main() {
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	cout << "Исходный массив: " << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << tab;
	}
	cout << endl;

	int sdvig;
	cout << "\nВведите число сдвигов: "; cin >> sdvig;
	for (int i = 0; i < sdvig; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[j] == 9) arr[j] = 0;
			else arr[j] += 1;
		}
	}

	cout << "\nСдвинутый массив: " << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << tab;
	}
	cout << endl;
}