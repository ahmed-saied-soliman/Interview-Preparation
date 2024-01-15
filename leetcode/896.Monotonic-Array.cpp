#include <vector>
#include <iostream>
using namespace std;

bool isMonotonic(vector<int> &nums)
{
    //Solved using single point check.
    bool inc = true;
    bool dec = true;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] > nums[i + 1])
        {
            inc = false;
        }
        if (nums[i] < nums[i + 1])
        {
            dec = false;
        }
        if (inc == false && dec == false)
        {
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> nums{1,2,2,3};
    cout<<isMonotonic(nums);
    return 0;
}