#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    // vector<int> vec1;
    // int element, size;
    // cout << "Enter the size of your vector" << endl;
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter an element to add to this vector: ";
    //     cin >> element;
    //     vec1.push_back(element);
    // }
    // display(vec1);

    // vec1.pop_back(); //deletes the last element of the vector
    // display(vec1);

    // vector<int>::iterator iter = vec1.begin(); // points the iterator to the starting of the vector
    // // vec1.insert(iter, 69);
    // vec1.insert(iter + 2, 69);
    // display(vec1);

    // vector<char> vec2(4); //4-element char vector

    // vector<int> vec3(6, 3); //6-element vector of 3s
    // for (int i = 0; i < vec3.size(); i++)
    // {
    //     cout << vec3[i] << " ";
    // }

    return 0;
}
