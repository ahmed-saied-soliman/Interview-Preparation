#include <iostream>
#include <vector>
using namespace std;

vector<int> getRow(int rowIndex)
{
    vector<int> res{1};
    for (int i = 1; i <= rowIndex; i++)
    {
        vector<int> next_row(res.size() + 1, 0);
        for (int j = 0; j < res.size(); j++)
        {
            next_row[j] += res[j];
            next_row[j + 1] += res[j];
        }
        res = next_row;
    }
    return res;
}

int main(){
    int rowIndex=3;
    vector<int> res=getRow(rowIndex);
    for(auto x:res){
        cout<<x;
    }
    cout<<endl;
    return 0;
}