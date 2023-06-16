#include <iostream>
using namespace std;
const int m = 50;
class ITEMS
{
    int itemCode[m];
    float itemPrice[m];
    int count;

public:
    void CNT() { count = 0; }
    void getitem();
    void displaySum();
    void remove();
    void displayitems();
};
void ITEMS ::getitem()
{
    cout << "Enter item code:";
    cin >> itemCode[count];

    cout << "Enter item cost:";
    cin >> itemPrice[count];
    count++;
}
void ITEMS ::displaySum()
{
    float sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum = sum + itemPrice[i];
    }
    cout << "\nTotal value :" << sum << "\n";
}
void ITEMS ::remove()
{
    int a;
    cout << "Enter item code:";
    cin >> a;
    for (int i = 0; i < count; i++)
    {
        if (itemCode[i] == a)
            itemPrice[i] = 0;
    }
}
void ITEMS ::displayitems()
{
    cout << "\nCode price\n";
    for (int i = 0; i < count; i++)
    {
        cout << "\n"<< itemCode[i];
        cout << "  " << itemPrice[i];
    }
    cout << "\n";
}
int main()
{
    ITEMS order;
    order.CNT();
    int x;

    do
    {
        cout << "you can do following"
             << " "
             << "Enter appropriate number \n";
        cout << "\n1:Add an item";
        cout << "\n2:display total value";
        cout << "\n3:delete an item";
        cout << "\n4:display all items";
        cout << "\n5:Quit";
        cout << "\nWhat is your option";

        cin >> x;

        switch (x)
        {
        case 1:
            order.getitem();
            break;
        case 2:
            order.displaySum();
            break;
        case 3:
            order.remove();
            break;
        case 4:
            order.displayitems();
            break;
        case 5:
            break;
        default:
            cout << "Error in input; Try again\n";
            break;
        }
    } while (x != 5);
    return 0;
}