#include <iostream>
#include <vector>
using namespace std;

vector<int> getRow(int A) {
    vector<int> res{1};
    for(int i=1;i<=A;i++){
        vector<int> next_row(res.size()+1, 0);
        for(int j=0;j<res.size();j++){
            next_row[j]=res[j]+next_row[j];
            next_row[j+1]=res[j]+next_row[j+1];
        }
        res=next_row;
    }
    return res;
}

int main(){
    vector<int> res;
    res=getRow(3);
    for(auto i:res){
        cout<<i<<"***";
    }
    cout<<endl;
    return 0;
}