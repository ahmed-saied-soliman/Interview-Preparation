#include <iostream>
#include <unordered_map>
using namespace std;

int romanToInt(string s)
{
    unordered_map<char, int> umap = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
    int total = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (umap[s[i]] < umap[s[i + 1]])
        {
            total += umap[s[i]] * (-1);
        }
        else
        {
            total += umap[s[i]];
        }
    }
    return total;
}

int main(){
    cout<<romanToInt("III");
    return 0;
}