#include <iostream>
using namespace std;
class Sample
{
    int a, b;
    friend float mean(Sample);

public:
    Sample()
    {
        cout << "Enter the value of a and b:" << endl;
        cin >> a >> b;
    }
};
float mean(Sample x)
{
    return ((x.a + x.b) / 2.0);
}
int main()
{
    Sample S1;
    cout << "Mean value = " << mean(S1);
    return 0;
}