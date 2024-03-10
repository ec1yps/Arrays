#include <iostream>
using namespace std;

void main() {
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE];

	arr[2] = 2048;
	cout << arr[2] << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
}