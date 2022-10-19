//Програмування алгоритмів з розгалуженням. Друге завдання
#include <iostream>
#include <string>

using namespace std;

int main() {
    int number;
    string letter;

    cout << "Введіть першу літеру країни : ";
    cin >> letter;

    if (letter == "У") {
        number = 1;
    }
    if (letter == "П") {
        number = 2;
    }
    if (letter == "Р") {
        number = 3;
    }
    if (letter == "Ч") {
        number = 4;
    }
    if (letter == "С") {
        number = 5;
    }
    if (letter == "Н") {
        number = 6;
    }
    if (letter == "І") {
        number = 7;
    }

    switch (number) {
    case 1: cout << "Україна, столиця Київ, населення 42млн"; break;
    case 2: cout << "Польща, столиця Варшава, населення 37млн"; break;
    case 3: cout << "Руминія, столиця Бухарест, населення 19млн"; break;
    case 4: cout << "Чехія, столиця Прага, населення 10млн"; break;
    case 5: cout << "Словаччина, столиця Братислав, населення 5млн"; break;
    case 6: cout << "Німеччина, столиця Берлін, населення 87млн"; break;
    case 7: cout << "Італія, столиця Рим, населення 60млн"; break;
    }

    return 0;
}