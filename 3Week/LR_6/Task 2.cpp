//������������� ��������� � �������������. ����� ��������
#include <iostream>
#include <string>

using namespace std;

int main() {
    int number;
    string letter;

    cout << "������ ����� ����� ����� : ";
    cin >> letter;

    if (letter == "�") {
        number = 1;
    }
    if (letter == "�") {
        number = 2;
    }
    if (letter == "�") {
        number = 3;
    }
    if (letter == "�") {
        number = 4;
    }
    if (letter == "�") {
        number = 5;
    }
    if (letter == "�") {
        number = 6;
    }
    if (letter == "�") {
        number = 7;
    }

    switch (number) {
    case 1: cout << "������, ������� ���, ��������� 42���"; break;
    case 2: cout << "������, ������� �������, ��������� 37���"; break;
    case 3: cout << "������, ������� ��������, ��������� 19���"; break;
    case 4: cout << "�����, ������� �����, ��������� 10���"; break;
    case 5: cout << "����������, ������� ���������, ��������� 5���"; break;
    case 6: cout << "ͳ�������, ������� �����, ��������� 87���"; break;
    case 7: cout << "�����, ������� ���, ��������� 60���"; break;
    }

    return 0;
}