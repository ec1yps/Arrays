#include <iostream>
using namespace std;

#define tab "\t"

void main() {
	setlocale(LC_ALL, "");

	const int n = 10;
	int arr[n];
	int minRand = 20, maxRand = 30;

	//заполнение массива уникальными числами
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % (maxRand - minRand) + minRand;
		for (int j = 0; j < i; j++)
			if (arr[j] == arr[i]) {
				i--;
				break;
			}			
	}

	//вывод массива
	for (int i = 0; i < n; i++) {
		cout << arr[i] << tab;
	}
	cout << endl;

	//вывод упорядоченного массива
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (arr[j] < arr[i]) {
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
		cout << arr[i] << tab;
	}
	cout << endl;
}