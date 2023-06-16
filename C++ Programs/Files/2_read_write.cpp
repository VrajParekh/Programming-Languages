#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string s;
    cout << "Enter your name:" << endl;
    cin >> s;
    ofstream fout("sample1b.txt");
    fout << s;
    fout.close();

    ifstream fin("sample1b.txt");
    string name;
    fin >> name;
    cout << "My name is " + name;
    fin.close();
    return 0;
}