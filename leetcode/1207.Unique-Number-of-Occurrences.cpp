#include <unordered_map>
#include <unordered_set>
#include <iostream>
#include <vector>
using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{
    unordered_map<int, int> frequencyMap;
    for (int element : arr)
    {
        ++frequencyMap[element];
    }
    unordered_set<int> occurrencesSet;
    for (auto &keyValue : frequencyMap)
    {
        int occurrence = keyValue.second;
        if (occurrencesSet.count(occurrence))
        {
            return false;
        }
        occurrencesSet.insert(occurrence);
    }
    return true;
}

int main()
{
    vector<int> nums{1,2,2,1,1,3};
    cout<<uniqueOccurrences(nums)<<endl;
    return 0;
}