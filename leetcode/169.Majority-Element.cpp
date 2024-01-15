#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int majorityElement(vector<int> &A)
{
    unordered_map<int, int> m;
    int res = 0;
    int maxCount = 0;
    for (int i = 0; i < A.size(); i++)
    {
        if (m.count(A[i]))
        {
            m[A[i]] = m.at(A[i]) + 1;
        }
        if (!m.count(A[i]))
        {
            m[A[i]] = 1;
        }
        if (m[A[i]] > maxCount)
        {
            res = A[i];
        }
        maxCount = max(m[A[i]], maxCount);
    }
    return res;
}

int main(){
    vector<int> nums{3,2,3};
    cout<<majorityElement(nums);
    return 0;
}