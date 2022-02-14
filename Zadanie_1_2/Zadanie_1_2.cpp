#include <iostream>
using namespace std;

int main()
{
	cout << "A: " << endl;
	int len_a, len_b;
	cin >> len_a;

	// проверка подходит ли длина массива
	if (len_a > 5 || len_a <= 0)
	{
		while (len_a > 5 || len_a <= 0)
		{
			cout << "Incorrect" << endl;
			cin >> len_a;
		}
	}
	int* A = new int[len_a];

	cout << "B: " << endl;
	cin >> len_b;
	// проверка подходит ли длина массива
	if (len_b > 4 || len_b <= 0)
	{
		while (len_b > 5 || len_b <= 0)
		{
			cout << "Incorrect enter" << endl;
			cin >> len_b;
		}
	}
	int* B = new int[len_b];

	// заполнение массива
	int a_mult = 1, b_mult = 1;
	for (int i = 0; i < len_a; i++)
	{
		cout << "A" << i << endl;
		cin >> *(A + i);
		a_mult *= *(A + i);
	}
	for (int i = 0; i < len_b; i++)
	{
		cout << "B" << i << endl;
		cin >> *(B + i);
		b_mult *= *(B + i);
	}
	cout << endl;
	// вывод
	if (a_mult < b_mult)
	{
		cout << "A:" << endl; 
		for (int i = 0; i < len_a; i++)
			cout << *(A + i) << " ";
	}
	else {
		cout << "B: " << endl;
		for (int i = 0; i < len_b; i++)
			cout << *(B + i) << " ";
	}
}

