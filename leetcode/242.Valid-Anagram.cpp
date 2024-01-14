#include <iostream>
#include <algorithm> 
#include <string>
#include <map>
using namespace std;

bool isAnagram(string s, string t)
{
    map<char, int> mp;
    for (auto i : s)
    {
        if (mp.count(i))
        {
            mp[i] += 1;
        }
        else
        {
            mp[i] = 1;
        }
    }
    for (auto i : t)
    {
        auto it = mp.find(i);
        if (it == mp.end())
        {
            return false;
        }
        else
        {
            if (it->second == 1)
            {
                mp.erase(it->first);
            }
            else
            {
                it->second -= 1;
            }
        }
    }
    return mp.empty();
}

bool isAnagramSol2(string s, string t)
{
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;
}

int main()
{
    cout<<isAnagram("anagram", "nagaram")<<endl;
    cout<<isAnagramSol2("anagram", "nagaram");
    return 0;
}