#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

bool repeatedSubstringPattern(string s)
{
    int n = s.length();
    for (int i = n / 2; i >= 1; i--)
    {
        if (n % i == 0)
        {
            int num_repeats = n / i;
            string substring = s.substr(0, i);
            string res;
            for (int j = 0; j < num_repeats; j++)
            {
                res.append(substring);
            }
            if (s==res)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    cout << repeatedSubstringPattern("abcabcabcabc") << endl;
    return 0;
}