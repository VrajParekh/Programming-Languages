//Tuple:- Just like pair, we can pair two heterogeneous objects, in tuple we can pair multiple objects.
#include <iostream>
#include <tuple>
using namespace std;
int main()
{
    tuple<string, int, int> t1;
    t1 = make_tuple("Vraj", 19, 99);

    // cout<<get<position_number>(tuple_object);
    cout << get<0>(t1) << " ";
    cout << get<1>(t1) << " ";
    cout << get<2>(t1) << " ";

    //Getting input from the user.
    // tuple<string, int, float> t2;
    // cin >> get<0>(t2);
    // cin >> get<1>(t2);
    // cin >> get<2>(t2);

    // cout << get<0>(t2) << " ";
    // cout << get<1>(t2) << " ";
    // cout << get<2>(t2) << " ";
    return 0;
}