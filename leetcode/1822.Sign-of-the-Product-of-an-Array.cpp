#include <vector>
#include <iostream>
using namespace std;

int arraySign(vector<int>& nums) {
    int count=0;
    for(auto num:nums){
        if(num==0){
            return 0;
        }
        else if(num<0){
            count++;
        }
    }
    if(count%2==0){
        return 1;
    }else{
        return -1;
    }
}

int main(){
    vector<int> nums{-1,1,-1,1,-1};
    cout<<arraySign(nums);
    return 0;
}