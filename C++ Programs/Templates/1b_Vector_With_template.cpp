#include <iostream>
using namespace std;

template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    vector<float> v1(3); //vector 1 with a float data type
    v1.arr[0] = 3.4;
    v1.arr[1] = 5.1;
    v1.arr[2] = 2.09;

    vector<float> v2(3); //vector 2 with a float data type
    v2.arr[0] = 6.6;
    v2.arr[1] = 2.5;
    v2.arr[2] = 0.25;

    float a = v1.dotProduct(v2);
    cout << a << endl;
    return 0;
}