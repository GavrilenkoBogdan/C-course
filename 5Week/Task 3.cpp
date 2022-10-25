#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a;
    int b;
    int h;

    cout << "Enter a" << "\n";
    cin >> a;
    cout << "Enter b" << "\n";
    cin >> b;
    cout << "Enter h" << "\n";
    cin >> h;

    for (int i = a; i <= b; i += h) {
        double x = i;
        double y;

        y = 5 * pow(x, 3) + sqrt(-x + 6);

        cout << y << "\n";

        while (y == 0)

            cout << "SOS";
    }

    return 0;
}