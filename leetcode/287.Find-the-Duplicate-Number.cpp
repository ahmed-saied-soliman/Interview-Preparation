#include <map>
#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int> &nums)
{
    map<int, int> map;
    int res = 0;
    int maxValue = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        if (!map.count(nums[i]))
        {
            map[nums[i]] = 1;
        }
        else
        {
            map[nums[i]] = map.at(nums[i]) + 1;
        }
    }
    for (const auto &entry : map)
    {
        if (maxValue < entry.second)
        {
            maxValue = entry.second;
            res = entry.first;
        }
    }
    return res;
}

int findDuplicateSol2(vector<int> &nums)
{
    map<int, int> map;
    int res = 0;
    int maxValue = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        if (!map.count(nums[i]))
        {
            map[nums[i]] = 1;
        }
        else
        {
            res=nums[i];
            return nums[i];
        }
    }
    return res;
}

int findDuplicateSol3(vector<int> &nums)
{
    /* Solved using th next approach which make every number redirect to the index
    then convert it to negative number cause we have n numbers in n+1 locations
    if we found the second number it will redirect to same place which is negative number
    then we can return the number
    [1,3,4,2,2]
    [1,-3,4,2,2]
    [1,-3,4,-2,2]
    [1,-3,4,-2,-2]
    */
    int n=nums.size();
    for (int num:nums){
        int idx=abs(num);
        if(nums[idx]<0){
            return idx;
        }
        nums[idx]=-1*nums[idx];
    }
    return n;
}

int main(){
    vector<int> nums{3,1,3,4,2};
    cout<<findDuplicateSol2(nums)<<endl;
    cout<<findDuplicateSol3(nums);
    return 0;
}