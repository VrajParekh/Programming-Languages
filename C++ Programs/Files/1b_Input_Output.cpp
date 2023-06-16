#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    /* ----------PRINT TEXT INTO THE FILE----------  */
    // ofstream fout;
    // //Open file Using the member function open()
    // fout.open("1bMyfile.txt");         //it will take a file into ram
    // fout << "Hello my fellow friends"; //it will print this statement into file
    // fout.close();                      //it will close the file

    /* ----------PRINT FILE TEXT INTO THE OUTPUT SCREEN----------  */
    ifstream fin;
    string st;
    fin.open("1bMyfile.txt");

    while (fin.eof() == 0)
    {
        getline(fin, st); //Aaa aakhi ek line print karse
        cout << st << endl;
    }
    fin.close();

    return 0;
}