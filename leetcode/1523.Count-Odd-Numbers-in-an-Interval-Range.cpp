#include <iostream>
using namespace std;

int countOdds(int low, int high) {
        if(low%2==0 && high%2==0){
            return (high-low)/2;
        }
        else if(low %2 != 0 && high%2 !=0){
            return (high-low)/2+1;
        }
        else{
            return ((high-low)+1)/2;
        }
    }

int main(){
    cout<<countOdds(3,7)<<endl;
    cout<<countOdds(8,10);
    return 0;
}