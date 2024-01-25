#include <vector>
#include <iostream>
using namespace std;

int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(i==j){
                    sum+=mat[i][j];
                }else if(i+j==(mat[i].size()-1)){
                    sum+=mat[i][j];
                }
            }
        }
        return sum;
    }

int main(){
    vector<vector<int>> mat{{1,2,3},{4,5,6},{7,8,9}};
    cout<<diagonalSum(mat);
    return 0;
}