#include <iostream>
using namespace std;
int main()
{
	cout << "A: " << endl;
	int len_a, len_b;
	cin >> len_a;


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
	if (len_b > 4 || len_b <= 0)
	{
		while (len_b > 5 || len_b <= 0)
		{
			cout << "Incorrect enter" << endl;
			cin >> len_b;
		}
	}
	int* B = new int[len_b];

	// заполнение массива А
	cout << endl;
	int sum_a = 0, sum_b = 0;
	for (int i = 0; i < len_a; i++)
	{
		cin >> *(A + i);
		sum_a += *(A + i);
	}
	for (int i = 0; i < len_b; i++)
	{
		cin >> *(B + i);
		sum_b += *(B + i);
	}
	if (sum_a > sum_b)
	{
		for (int i = 0; i < len_a; i++)
			cout << *(A + i) << " ";
	}
	else {
		for (int i = 0; i < len_b; i++)
			cout << *(B + i) << " ";
	}


}

