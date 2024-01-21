#include <iostream>
#include <vector>
using namespace std;

int climbStairs(int n) {
        int a=1;
        int b=0;
        int res=0;
        for(int i=0;i<n;i++){
            res=a+b;
            b=a;
            a=res;
        }
        return res;
}

int climbStairsSol2(int n) {
    if(n<2){
        return 1;
    }
    vector<int> nums(n+1);
    nums[0]=1;
    nums[1]=1;
    for(int i=2;i<=n;i++){
        nums[i]=nums[i-1]+nums[i-2];
    }
    return nums[n];
}

int climbStairsSol3(int n) {
    if(n<2){
        return 1;
    }
    return climbStairsSol3(n-1)+climbStairsSol3(n-2);
}

int main(){
    cout<<climbStairs(5)<<endl;
    cout<<climbStairsSol2(5)<<endl;
    cout<<climbStairsSol3(5)<<endl;
    return 0;
}