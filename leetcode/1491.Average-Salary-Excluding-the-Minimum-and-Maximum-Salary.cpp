#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

double average(vector<int>& salary) {
        int divider=salary.size()-2;
        int min_max=*min_element(salary.begin(), salary.end())+*max_element(salary.begin(), salary.end());
        double sum=0;
        for(int i=0;i<salary.size();i++){
            sum+=salary[i];
        }
        sum=(sum-min_max)/divider;
        return sum;
    }

int main(){
    vector<int> salary{4000,3000,1000,2000};
    cout<<average(salary);
    return 0;
}