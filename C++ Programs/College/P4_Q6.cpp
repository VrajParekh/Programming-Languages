#include <iostream>
using namespace std;
char *reverse(char *str, int count)
{
    int t;
    for (int i = 0; i < count / 2; i++)
    {
        t = *(str + i);
        *(str + i) = *(str + count - i - 1);
        *(str + count - i - 1) = t;
    }
    return (str);
}
int main()
{
    char s[20];
    int count = 0;
    cout << "Enter string:" << endl;
    cin >> s;
    for (int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    cout << "Reversed string is looks like:" << endl
         << reverse(s, count);
    return 0;
}