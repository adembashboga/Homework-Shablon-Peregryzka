#include<iostream>
#include<time.h>
using namespace std;

template<class T >
class MyArray
{
    T* mas = nullptr;
    int size;
public:
    MyArray();
    void Output();
    ~MyArray();
    T operator[](int index);
    int GetSize()const
    {
        return size;
    }
    T* GetPtr()const
    {
        return mas;
    }
    void SetSize(int s)
    {
        size = s;
    }
    void SetPtr(T* ptr)
    {
        mas = ptr;
    }
};
template<class T>MyArray<T>::MyArray()
{
    size = 10;
    mas = new T[10];
    for (int i = 0; i < size; i++)
    {
        mas[i] = rand() % 100 * 1.2;
    }
}
template<class T>void MyArray<T>::Output()
{
    for (int i = 0; i < size; i++)
    {
        cout << mas[i] << "\t";
    }
    cout << endl << endl;
}
template<class T>MyArray<T>::~MyArray()
{
    if (mas != nullptr)
    {
        delete[] mas;
    }
}
template<class T>T MyArray<T>::operator[](int index)
{
    return mas[index];
}

void main()
{
    srand(time(0));
    MyArray<int> obj1;
    obj1.Output();

    MyArray<char> obj2;
    obj2.Output();

    MyArray<double>obj3;
    obj3.Output();




    system("pause");
}

class Point {
    int x;
    int y;
public:
    Point() : x(0), y(0) {} 
    Point(int x, int y) : x(x), y(y) {}

    void Print() const {
        cout << "<" << x << ", " << y << ">";
    }
};

int main() {
    srand(time(0));

    MyArray<Point> obj1;
    obj1.Output();

    system("pause");
}