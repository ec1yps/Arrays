#include <iostream>
using namespace std;

//#define SEARCH_1
#define SEARCH_2

#define tab "\t"

void main() {
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];

#ifdef SEARCH_1
	//заполнение массива случайными числами и его вывод
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 8;
		cout << arr[i] << tab;
	}
	cout << endl;

	//проверка элементов на повторение и их подсчет, вывод результатов проверки
	for (int i = 0; i < n; i++) {
		int counter = 0;

		for (int j = i + 1; j < n; j++)
			if (arr[i] == arr[j]) counter++;

		for (int j = 0; j < i; j++)
			if (arr[i] == arr[j]) {
				counter = 0;
				break;
			}

		if (counter)
			cout << "Повторяющийся элемент: " << arr[i] << tab << "Количество повторений: " << counter << endl;
	}
#endif // SEARCH_1

#ifdef SEARCH_2
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 8;
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << tab;
	}
	cout << endl;

	//Поиск повторений:
	for (int i = 0; i < n; i++) {
		bool met_before = false;
		for (int j = 0; j < i; j++) {
			if (arr[i] == arr[j]) {
				met_before = true;
				break;
			}
		}
		if (met_before) continue;

		int counter = 0;
		for (int j = i + 1; j < n; j++) {
			if (arr[i] == arr[j]) counter++;
		}

		//if (counter) cout << "Значение " << arr[i] << " повторяется " << counter << " раз" << endl;
		if (counter) printf("Значение %i повторяется %i раз\n", arr[i], counter);
		
	}
#endif // SEARCH_2

}