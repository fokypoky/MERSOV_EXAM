#include <iostream>
using namespace std;

/* Найти наибольшее значение, вычесть из всех элементов массивов, вывести входные и выходные*/

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
	
	// заполнение массивов, поиск максимального значения
	int a_max, b_max;
	for (int i = 0; i < len_a; i++)
	{
		cout << "A" << i << endl;
		cin >> *(A + i);
		if (i == 0)
		{
			a_max = *A;
		}
		else {
			if (a_max < *(A + i))
			{
				a_max = *(A + i);
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
		}
		else {
			if (b_max < *(B + i))
			{
				b_max = *(B + i);
			}
		}
	}

	// вывод исходных массивыво и вычитание макс числа
	cout << endl;
	cout << "StartMas: " << endl;
	for (int i = 0; i < len_a; i++)
	{
		cout << *(A + i) << " ";
		*(A + i) -= a_max;
	}
	cout << endl;
	for (int i = 0; i < len_b; i++)
	{
		cout << *(B + i) << " ";
		*(B + i) -= b_max;
	}
	// преобразованные
	cout << endl;
	cout << "End Mas: " << endl;

	for (int i = 0; i < len_a; i++)
	{
		cout << *(A + i) << " ";
	}
	cout << endl;
	for (int i = 0; i < len_b; i++)
	{
		cout << *(B + i) << " ";
	}


	delete[] A, B;

}
