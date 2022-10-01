//Програмування алгоритмів з розгалуженням. Перше завдання
#include <iostream>

using namespace std;

int main() {
    //Четверте питання
    int number;
    int count = 1;
    int a;
    int b;
    int c;

    //Розкладення на цифри
    cout << "Введіть трьохцифрове число : ";
    cin >> number;
    a = number / 100;
    b = number / 10 % 10;
    c = number % 10;

    cout << "Перше число" << a << "\n";
    cout << "Друге число" << b << "\n";
    cout << "Третє число" << c << "\n";

    //Перевірка на непарність. Добуток непарних чисел
    if ((a % 2) != 0) {
        count = a * count;
    }
    if ((b % 2) != 0) {
        count = b * count;
    }
    if ((c % 2) != 0) {
        count = c * count;
    }

    cout << "Добуток непарних чисел : " << count;


    return 0;
}