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

	int a_count = 0, b_count = 0;

	for (int i = 0; i < len_a; i++)
	{
		cout << "A" << i << endl;
		cin >> *(A + i); 
		if (*(A + i) >= 0)
		{
			a_count++;
		}
	}
	for (int i = 0; i < len_a; i++)
	{
		cout << "B" << i << endl;
		cin >> *(B + i);
		if (*(B + i) >= 0)
		{
			b_count++;
		}
	}
	cout << endl;
	if (a_count < b_count)
	{
		for (int i = 0; i < len_a; i++)
			cout << *(A + i) << " ";
		cout << endl;
		for (int i = 0; i < len_b; i++)
			cout << *(B + i) << " ";
	}
	else
	{
		for (int i = 0; i < len_b; i++)
			cout << *(B + i) << " ";
		cout << endl;
		for (int i = 0; i < len_a; i++)
			cout << *(A + i) << " ";
	}
	delete[] A, B;
}
