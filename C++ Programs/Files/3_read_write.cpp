#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ofstream fout("sample3.txt");
    string name;
    int cost;

    cout << "Enter item name:" << endl;
    cin >> name;
    fout << name << endl;
    cout << "Enter item cost:" << endl;
    cin >> cost;
    fout << cost;

    fout.close();

    ifstream fin("sample3.txt");
    fin >> name;
    fin >> cost;

    cout << "Item name is " << name << endl;
    cout << "Item cost is " << cost << endl;

    fin.close();
    return 0;
}