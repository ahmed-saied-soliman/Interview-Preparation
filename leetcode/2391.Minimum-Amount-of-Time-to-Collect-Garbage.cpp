#include <vector>
#include <string>
#include <iostream>
using namespace std;

int garbageCollection(vector<string> &garbage, vector<int> &travel)
{
    int totalTime = 0;
    vector<int> lastOccurrence(3);
    travel.insert(travel.begin(), 0);
    for (int i = 1; i < travel.size(); i++)
    {
        travel[i] = travel[i] + travel[i - 1];
    }
    for (int i = 0; i < garbage.size(); i++)
    {
        if (garbage[i].find('M')!= std::string::npos)
        {
            lastOccurrence[0] = i;
        }
        if (garbage[i].find('G')!= std::string::npos)
        {
            lastOccurrence[2] = i;
        }
        if (garbage[i].find('P')!= std::string::npos)
        {
            lastOccurrence[1] = i;
        }
        for (auto c : garbage[i])
        {
            totalTime += 1;
        }
    }
    for (int i = 0; i < lastOccurrence.size(); i++)
    {
        totalTime += travel[lastOccurrence[i]];
    }
    return totalTime;
}

int main()
{
    vector<string> garbage {"G","P","GP","GG"};
    vector<int> travel{2,4,3};
    cout<<garbageCollection(garbage,travel);
    return 0;
}