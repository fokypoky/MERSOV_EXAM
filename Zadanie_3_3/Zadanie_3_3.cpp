#include <iostream>
#include <locale.h>
using namespace std;
template <class T>
class MyClass {
private :
    int Len;
    T* a, * A;
public: 
    MyClass(int len)
    {
        Len = len;
        a = new T[len];
        A = new T[len];
    }
    ~MyClass()
    {
        delete[] a, A;
    }
    void Print()
    {
        for (int i = 0; i < Len; i++)
        {
            cout << A[i] << " ";
        }
    }
    void Set()
    {
        for (int i = 0; i < Len; i++)
        {
            cout << "Введите значение" << endl;
            cin >> a[i];
        }
        for (int i = 0; i < Len; i++)
        {
            T buf;
            for (int j = i; j >= 0; j--)
            {
                if (j == i)
                    buf = GetModul(a[j]);
                else {
                    buf += GetModul(a[j]);
                }
            }
            A[i] = buf;
        }
    }
private:
    T GetModul(T num)
    {
        if (num < 0)
            return num * (-1);
        else
            return num;
    }
};

int main()
{
    setlocale(LC_ALL, "ru");
    int l;
    cin >> l;
    MyClass <double> mc(l);
    mc.Set();
    mc.Print();
}
