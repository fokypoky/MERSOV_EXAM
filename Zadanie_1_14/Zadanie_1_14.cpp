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
	if (len_b > 5 || len_b <= 0)
	{
		while (len_b > 5 || len_b <= 0)
		{
			cout << "Incorrect enter" << endl;
			cin >> len_b;
		}
	}
	int* B = new int[len_b];

	// найти наименьший элемент, умножить на него все элементы. вывести входные массивы и исходные

	int a_min, b_min;
	for (int i = 0; i < len_a; i++)
	{
		cout << "A" << i << endl;
		cin >> *(A + i);
		if (i == 0)
			a_min = *(A + i);
		else {
			if (*(A + i) < a_min)
			{
				a_min = *(A + i);
			}
		}
	}
	for (int i = 0; i < len_b; i++)
	{
		cout << "B" << i << endl;
		cin >> *(B + i);
		if (i == 0)
			b_min = *(B + i);
		else {
			if (*(B + i) < b_min)
			{
				b_min = *(B + i);
			}
		}
	}
	cout << endl;
	// output start arrays
	for (int i = 0; i < len_a; i++)
	{
		cout << *(A + i) << " ";
		*(A + i) *= a_min;
	}
	cout << endl;
	for (int i = 0; i < len_b; i++)
	{
		cout << *(B + i) << " ";
		*(B + i) *= b_min;
	}
	cout << endl;
	for (int i = 0; i < len_a; i++)
		cout << *(A + i) << " ";
	cout << endl;
	for (int i = 0; i < len_b; i++)
		cout << *(B + i) << " ";

    delete[] A, B;
}
