﻿#include <iostream>
using namespace std;

#define tab "\t"

void main() {
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 };

	cout << "Исходный массив: " << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << tab;
	}
	cout << endl;

	int number_of_shifts;
	cout << "\nВведите число сдвигов: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++) {
		int buffer = arr[0];
		for (int j = 1; j < n; j++) {
			arr[j - 1] = arr[j];
		}
		arr[n - 1] = buffer;
	}

	cout << "\nСдвинутый массив: " << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << tab;
	}
	cout << endl;
}