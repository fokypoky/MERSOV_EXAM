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

	int sum_a = 0, sum_b = 0;
	// заполнение массива
	for (int i = 0; i < len_a; i++)
	{
		cout << "A" << i << endl;
		cin >> *(A + i);
		sum_a += *(A + i);
	}
	for (int i = 0; i < len_b; i++)
	{
		cout << "B" << i << endl;
		cin >> *(B + i);
		sum_b += *(B + i);
	}
	// поиск среднего арифметического
	double sr_a = ((double)sum_a) / ((double)len_a);
	double sr_b = ((double)sum_b) / ((double)len_b);
	cout << endl << "Arrays:" << endl;
	for (int i = 0; i < len_a; i++)
		cout << *(A + i) << " ";
	cout << endl;
	for (int i = 0; i < len_b; i++)
		cout << *(B + i) << " ";
	cout << "sr a = " << sr_a << "\n" << "sr b = " << sr_b;

	delete[] A, B;

}
