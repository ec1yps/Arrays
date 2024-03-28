#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

void main() {
	setlocale(LC_ALL, "");

	const int n = 5;
	int arr[n];
	int minRand, maxRand;

start:
	cout << "¬ведите минимальное случайное число: "; cin >> minRand;
	cout << "¬ведите максимальное случайное число: "; cin >> maxRand;

	if (minRand > maxRand || minRand == maxRand) {
		cout << "\n!!!!!ERROR!!!!!\n" << endl;
		goto start;
	}

	for (int i = 0; i < n; i++) {
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
	
	for (int i = 0; i < n; i++) {
		cout << arr[i] << tab;
	}
	cout << endl;
	
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[i]) {
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
	
	for (int i = 0; i < n; i++) {
		cout << arr[i] << tab;
	}
	cout << endl;
}