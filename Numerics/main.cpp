#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define DEC_2_BIN
#define DEC_2_HEX

void main() {
	setlocale(LC_ALL, "");

	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;

#ifdef DEC_2_BIN
	const int MAX_CAPASITY = 32;
	bool binary[MAX_CAPASITY] = {};

	int i = 0;
	/*for (; decimal > 0; i++) {
		binary[i] = decimal % 2;
		decimal /= 2;
	}*/
	for (; decimal; decimal /= 2) binary[i++] = decimal % 2;

	for (--i; i >= 0; i--) {
		cout << binary[i];
	}
	cout << endl;
#endif // DEC_2_BIN

#ifdef DEC_2_HEX
	const int MAX_HEX_CAPASITY = 8;
	char hex[MAX_HEX_CAPASITY] = {};

	int i = 0;
	for (; decimal; i++) {
		hex[i] = decimal % 16;
		hex[i] += hex[i] < 10 ? 48 : 55;
		decimal /= 16;
	}
	//for (; decimal; hex[i++] = decimal % 16, decimal /= 16);

	for (--i; i >= 0; i--) {
		/*if (hex[i] < 10)
			cout << (int)hex[i];
		else 
			cout << char(hex[i] + 55);*/
		//cout << char(hex[i] < 10 ? hex[i] + 48 : hex[i] + 55);
		//cout << char(hex[i] < 10 ? hex[i] + '0' : hex[i] + 'A' - 10);
		cout << hex[i];
	}
	cout << endl;
#endif // DEC_2_HEX

}