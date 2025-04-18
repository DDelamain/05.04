#include <iostream>
using namespace std;

int num, counter, sum, zero, choose;
double arif;
int main(){
	setlocale(LC_ALL, "Rus");
	cout << "Введите число: ";
	cin >> num;
	while (num != 0) {
		sum += num % 10;
		if (num % 10 == 0) {
			zero++;
		}
		num /= 10;
		counter++;
	}
	arif = sum / counter;
	cout << "Что вы хотите посчитать? (Выберите цифру)\n1. Cумму цифр этого числа\n2. Количество нулей в числе\n3. Количество цифр в числе\n4. Среднее арифметическое цифр этого числа\n";
	cin >> choose;
	switch (choose) {
	case 1: cout << "Сумма цифр: " << sum; break;
	case 2: cout << "Нулей в числе: " << zero; break;
	case 3: cout << "Цифр в числе: " << counter; break;
	case 4: cout << "Среднее арифметическое равно: " << arif; break;
	default: cout << "Вы ввели неверное число!"; return 0;
	}
}