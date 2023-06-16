#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{

    // Map is an associative array
    map<string, int> marksMap;
    marksMap["Atul"] = 58;
    marksMap["Rohit"] = 57;
    marksMap["Kishlay"] = 78;
    marksMap["Aditya"] = 65;
    marksMap["Sachin"] = 53;

    // .first accesses the first value of a pair that is our map key here,
    //  and .second accesses the second value of the pair that is our map
    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        // cout << (*iter).first << " " << (*iter).second << "\n";
        cout << iter->first << " " << iter->second << "\n";
    }
    marksMap.insert({{"RohanDas", 52}, {"Parth", 75}});
    return 0;
}
