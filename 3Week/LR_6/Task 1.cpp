//������������� ��������� � �������������. ����� ��������
#include <iostream>

using namespace std;

int main() {
    //�������� �������
    int number;
    int count = 1;
    int a;
    int b;
    int c;

    //����������� �� �����
    cout << "������ ������������ ����� : ";
    cin >> number;
    a = number / 100;
    b = number / 10 % 10;
    c = number % 10;

    cout << "����� �����" << a << "\n";
    cout << "����� �����" << b << "\n";
    cout << "���� �����" << c << "\n";

    //�������� �� ���������. ������� �������� �����
    if ((a % 2) != 0) {
        count = a * count;
    }
    if ((b % 2) != 0) {
        count = b * count;
    }
    if ((c % 2) != 0) {
        count = c * count;
    }

    cout << "������� �������� ����� : " << count;


    return 0;
}