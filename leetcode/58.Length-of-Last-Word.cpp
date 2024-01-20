#include <iostream>
using namespace std;

int lengthOfLastWord(string s)
{
    int count = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (count > 0 && s[i] == ' ')
        {
            break;
        }
        else if (s[i] != ' ')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    cout << lengthOfLastWord("   fly me   to   the moon  ");
    return 0;
}