#include <iostream>
#include <locale.h>
using namespace std;
template <class T>
class MyClass
{
private:
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
        delete [] a, A;
    }
    void Set()
    {
        for (int i = 0; i < Len; i++)
        {
            cout << "Введите значение" << endl;
            cin >> a[i];
        }
        T buf = a[0];
        for (int i = 0; i < Len; i++)
        {
            A[i] = buf * a[i];
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
    int l;
    cin >> l;
    MyClass <int> mc(l);
    mc.Set();
    mc.Print();
}
