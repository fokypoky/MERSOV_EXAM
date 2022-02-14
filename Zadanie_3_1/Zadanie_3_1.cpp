#include <iostream>
#include <locale.h>

using namespace std;
template <class T>
class MyClass {
private:
    int Len; // длина
    T* a /*входной массив*/, * A /*выходной массив*/;
public:
    MyClass(int l)
    {
        a = new T[l];
        A = new T[l];
        Len = l;
    }
    ~MyClass()
    {
        delete a, A;
    }
    void Set()
    {
        for (int i = 0; i < Len; i++)
        {
            cout << "Введите значение" << endl;
            cin >> a[i];
        }
        // преобразование согласно формуле
        for (int i = 0; i < Len; i++)
        {
            if (i == 0)
                A[0] = a[0];
            else
            {
                T buf;
                for (int j = i; j >= 0; j--)
                {
                    if (j == i)
                        buf = a[j];
                    else {
                        buf += a[j];
                    }
                }
                A[i] = buf;
            }
        }
    }
    void Print()
    {
        for (int i = 0; i < Len; i++)
        {
            cout << A[i] << " ";
        }
    }
};
int main()
{
    setlocale(LC_ALL, "ru");
    cout << "Введите длину массива" << endl;
    int len;
    cin >> len;
    cout << endl;
    MyClass <float> my(len);
    my.Set();
    my.Print();
    my.~MyClass();
}

