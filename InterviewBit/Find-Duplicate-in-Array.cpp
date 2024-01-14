#include <vector>
#include <iostream>
#include <map>
using namespace std;

int findDuplicate(vector<int>& nums) {
    map<int,int> map;
    int res=0;
    int maxValue = INT_MIN;
    for(int i=0;i<nums.size();i++){
        if(!map.count(nums[i])){
            map[nums[i]]=1;
        }else{
            map[nums[i]]=map.at(nums[i])+1;
        }
    }
    for (const auto &entry: map)
    {
        if (maxValue < entry.second)
        {
            maxValue = entry.second;
            res = entry.first;
        }
    }
    return res;
}

int findDuplicateOptimized(vector<int>& nums) {
    // floyd's algorithm
    int slow=0;
    int fast=0;
    do{
        slow=nums[slow];
        fast=nums[nums[fast]];
    }while(slow!=fast);
    slow=0;
    while(slow!=fast){
        slow=nums[slow];
        fast=nums[fast];
    }
    return slow;
}

int main(){
    vector<int> input{1,3,4,2,2};
    cout<<findDuplicateOptimized(input);
    cout<<findDuplicate(input);
    return 0;
}