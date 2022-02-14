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
		while (len_b > 4 || len_b <= 0)
		{
			cout << "Incorrect enter" << endl;
			cin >> len_b;
		}
	}
	int* B = new int[len_b];

	int a_max, b_max;
	int a_index, b_index;

	for (int i = 0; i < len_a; i++)
	{
		cout << "A" << i << endl;
		cin >> *(A + i);
		if (i == 0)
		{
			a_max = *A;
			a_index = 0;
		}
		else 
		{
			if (a_max < *(A + i))
			{
				a_max = *(A + i);
				a_index = i;
			}
		}
	}
	for (int i = 0; i < len_b; i++)
	{
		cout << "B" << i << endl;
		cin >> *(B + i);
		if (i == 0)
		{
			b_max = *B;
			b_index = 0;
		}
		else
		{
			if (b_max < *(B + i))
			{
				b_max = *(A + i);
				b_index = i;
			}
		}
	}
	cout << endl;
	if (a_max > b_max)
	{
		for (int i = 0; i < len_a; i++)
			cout << *(A + i) << " ";
		cout << endl << "Max a = " << a_max << endl << "Index = " << a_index;
	}
	else
	{
		for (int i = 0; i < len_b; i++)
			cout << *(B + i) << " ";
		cout << endl << "Max b = " << b_max << endl << "Index = " << b_index;
	}

	delete[] A, B;
}
