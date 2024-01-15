#include <vector>
#include <iostream>

using namespace std;

void moveZeroes(vector<int> &nums)
{
    //solved by two pointers.
    int i = 0;
    int j = 1;
    while (i < nums.size() && j < nums.size())
    {
        if (nums[j] != 0 && nums[i] == 0)
        {
            nums[i] = nums[j];
            nums[j] = 0;
            i++;
            j++;
        }
        else if (nums[i] == 0 && nums[j] == 0)
        {
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }
}

int main()
{
    vector<int> nums{0,1,0,3,12};
    moveZeroes(nums);
    for(auto x:nums){
        cout<<x;
    }
    cout<<endl;
    return 0;
}