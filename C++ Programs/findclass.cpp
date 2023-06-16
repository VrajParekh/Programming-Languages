#include <bits/stdc++.h>
using namespace std;
int main()
{
    string ip;
    char st[5];
    cout << "Enter :" << endl;
    cin >> ip;
    int i = 0;
    while (ip[i] != '.')
    {
        st[i] = ip[i];
        i++;
    }
    int n = stoi(st);
    // cout << n;
    if (n >= 1 && n <= 126)
    {
        cout << "Class A";
    }
    else if (n >= 128 && n <= 191)
    {
        cout << "Class B";
    }
    else if (n >= 192 && n <= 223)
    {
        cout << "Class C";
    }
    else if (n >= 224 && n <= 239)
    {
        cout << "Class D";
    }
    else if (n >= 240 && n <= 255)
    {
        cout << "Class E";
    }
}