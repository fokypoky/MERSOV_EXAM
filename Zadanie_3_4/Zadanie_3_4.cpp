#include <iostream>
#include <locale.h>
using namespace std;
template <class T>
class MyCLass {
private:
    int Len;
    T* a, * A;
public : 
    MyCLass(int len)
    {
        Len = len;
        a = new T[len];
        A = new T[len];
    }

    ~MyCLass()
    {
        delete[] a, A;
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
                    buf = a[j];
                else {
                    buf *= a[j];
                }
            }
            A[i] = buf * GetDegree((-1), (i + 1));

        }
    }
    void Print()
    {
        for (int i = 0; i < Len; i++)
        {
            cout << A[i] << " ";
        }
    }
private: 

    T GetDegree(T num, int d)
    {
        T buf_num = num;
        for (int i = 0; i < d; i++)
            buf_num = buf_num * num;
        return buf_num;

    }


};


int main()
{
    setlocale(LC_ALL, "ru");
    int l;
    cin >> l;

    MyCLass <double> mc(l);
    mc.Set();
    mc.Print();
}
