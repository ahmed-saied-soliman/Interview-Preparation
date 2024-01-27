#include <iostream>
#include <string>
using namespace std;

string toLowerCase(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]))
        {
            s[i] = char(int(s[i]) + 32);
        }
        else
        {
            s[i] = s[i];
        }
    }
    return s;
}
int main()
{
    cout << toLowerCase("Hello");
    return 0;
}