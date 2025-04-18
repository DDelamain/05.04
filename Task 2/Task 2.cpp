#include <iostream>
using namespace std;
int csize;
int main(){
	setlocale(LC_ALL, "Rus");
	char black = '#';
	char white = '0';
	cout << "Введите размер клеточки: ";
	cin >> csize;
	for (int i = 1; i <= 8; i++) {
		for (int j = 1; j <= 8; j++) {
			bool odd = (i + j) % 2 == 0;
			char cell = odd ? black : white;
			for (int k = 0; k < csize; k++) {
				cout << cell;
			}
		}
		cout << "\n";
	}
}

