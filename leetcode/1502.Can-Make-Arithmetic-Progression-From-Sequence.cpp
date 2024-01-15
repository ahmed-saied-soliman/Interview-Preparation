#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool canMakeArithmeticProgression(vector<int> &arr)
{
    //Solved by sorting.
    sort(arr.begin(), arr.end());
    int base = arr[1] - arr[0];
    for (int i = 2; i < arr.size(); i++)
    {
        if (arr[i] - arr[i - 1] != base)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> nums{3,5,1};
    cout<<canMakeArithmeticProgression(nums);
    return 0;
}