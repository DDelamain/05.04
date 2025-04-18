#include <iostream>
using namespace std;
int person, sum,choice;
int main(){
    setlocale(LC_ALL, "Rus");
    const int Size = 6;
    string Menu[Size] = { "Кофе\t", "Чай\t", "Вода\t", "Пироженое", "Пончик", "Панкейки" };
    int Price[Size] = { 180,120,50,210,180,200 };
    cout << "\tДОБРО ПОЖАЛОВАТЬ!\nНа сколько человек заказ? : ";
    cin >> person;
    for (int i = 0; i < person; i++) {
        cout << "Клиент " << i+1 << " делайте заказ: \n";
        int cont = 1;
        while (cont == 1) {
            for (int j = 0; j < Size; j++) {
                cout << j + 1 << ". " << Menu[j] << "\t- " << Price[j] << " руб.\n";
            }
            cout << "Введите номер позиции, которую вы хотели бы заказать: ";
            cin >> choice;
            if (choice > 0 && choice <= Size) {
                sum += Price[choice - 1];
                cout << Menu[choice - 1] << " добавлен в заказ\n";
            }
            else {
                cout << "Такой позиции нет\n";
            }
            cout << "Хотите добавить еще что-то?\n(1 - да, 0 - нет)\n";
            cin >> cont;
        }
    }
    cout << "Всего с вас: " << sum << " руб.";
}
