#include <iostream>

using namespace std;

int main(void) {
	int number;
	int tagnum = 0;
	int cnumber = 1;
	int a = 10;
	int count = 1;

	cout << "×èñëî\t" << "Ì³ñöå";

	cin >> number;

	cout << number % a;

	cout << '\t' << cnumber;

	cout << '\n';

	while (cnumber != 0)
	{

		cout << number / a % 10;

		count++;

		cout << '\t' << count;

		a *= 10;

		cout << '\n';

		if ((number / a % 10) < 7)
		{
			tagnum = tagnum + 7;
		}

		cnumber = number / a;
	}

	cout << "Ñóìà öèôğ, ìåíøèõ çà 7 : " << tagnum;

	return 0;
}