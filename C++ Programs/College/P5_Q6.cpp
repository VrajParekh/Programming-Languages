//Define a class to represent a bank account. include the members like name of the depositor , account number ,type of account,
//and balance amount. make functions (1)To assign initial values, (2)To deposit an amount,(3)To withdraw an amount after checking
//the balance (4)To display name and balance.Write a main program to test the program
#include <iostream>
using namespace std;

class Bank_Account
{
    char nm[100], acctype[100];
    int acno;
    float bal;

public:
    void putData();
    void Deposit();
    void Withdraw();
    void Display();
};
void Bank_Account ::putData()
{
    cout << "---ENTER FOLLOWING DETAILS---\n";
    cout << "-----------------------------\n";
    cout << "ACCOUNT NO:";
    cin >> acno;
    cout << "NAME:";
    cin >> nm;
    cout << "ACCOUNT TYPE:";
    cin >> acctype;
    cout << "BALANCE:";
    cin >> bal;
}
void Bank_Account ::Deposit()
{
    int depo;
    cout << "\nEnter Deposit Amount:";
    cin >> depo;
    bal += depo;
}
void Bank_Account ::Withdraw()
{
    int wd;
    cout << "\nEnter Withdraw Amount:";
    cin >> wd;
    if (wd > bal)
    {
        cout << "\nCannot Withdraw Amount";
    }
    bal -= wd;
}
void Bank_Account ::Display()
{
    cout << "-----------------------------";
    cout << "\nACCOUNT NO:" << acno;
    cout << "\nNAME:" << nm;
    cout << "\nACCOUNT TYPE:" << acctype;
    cout << "\nBALANCE:" << bal;
}
int main()
{
    Bank_Account b1;
    b1.putData();
    b1.Deposit();
    b1.Withdraw();
    b1.Display();
    return 0;
}