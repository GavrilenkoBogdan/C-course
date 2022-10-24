//Розробка алгоритмів з розгалуженою структурою. Перше завдання
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    //Четвертий приклад
    int x;
    float Y;

    cin >> x;

    if (x >= 0) {
        Y = exp(-x + 2);
    }
    else if (x < 0)
    {
        Y = exp(-x) * sin(1 / (x + 3.2));
    }

    cout << Y;

    return(0);
}
