#include <iostream>
using namespace std;

void TOH(int n, char BEG, char AUX, char END)
{
    if (n > 0)
    {
        TOH(n - 1, BEG, END, AUX);
        cout << "Move a disc from " << BEG << " To " << END << endl;
        TOH(n - 1, AUX, BEG, END);
    }
}
int main()
{
    int n;
    cout << "Enter n:" << endl;
    cin >> n;
    TOH(n, 'A', 'B', 'C');
    return 0;
}