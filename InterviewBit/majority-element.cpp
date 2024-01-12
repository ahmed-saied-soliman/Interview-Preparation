#include <vector>
#include <unordered_map>
#include<iostream>

using namespace std;

int majorityElement(const vector<int> &A) {
    unordered_map<int, int> m;
    int res=0;
    int maxCount=0;
    for(int i=0;i<A.size();i++){
        if(m.count(A[i])){
            m[A[i]]=m.at(A[i])+1;
        }
        if(!m.count(A[i])){
            m[A[i]]=1;
        }
        if(m[A[i]]>maxCount){
            res=A[i];
        }
        maxCount=max(m[A[i]],maxCount);
    }
    cout<<"res"<<res<<endl; 
    return res;
}

int main(){
    vector<int> arr={2, 2, 3, 2, 5, 5, 3, 3, 3};
    cout<<majorityElement(arr);
    return 0;
}