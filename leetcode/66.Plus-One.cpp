#include <vector>
#include <iostream>
using namespace std;

 vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int carrier=1;
        int i=n-1;
        while (carrier){
            if (i>=0){
                if (digits[i]==9){
                    digits[i]=0;
                }else{
                    digits[i]+=carrier;
                    carrier=0;
                }
            }
            else{
                digits.insert(digits.begin(),carrier);
                carrier=0;
            }
            i--;
        }
        return digits;
    }

int main(){
    vector<int> num{1,2,3};
    vector<int> res;
    res=plusOne(num);
    for(auto x:res){
        cout<<x;
    }
    cout<<endl;
    return 0;
}