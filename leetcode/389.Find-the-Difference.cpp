#include <iostream>
#include <string>
using namespace std;

char findTheDifference_ASCII(string s, string t) {
    int sum_s,sum_t=0;
    for(auto c:s){
        sum_s+=int(c);
    }
    for(auto c:t){
        sum_t+=int(c);
    }
    return char(sum_t-sum_s);
}

char findTheDifference_XOR(string s, string t) {
    int res=0;
    for(auto c:s){
        res=res^int(c);
    }
    for(auto c:t){
        res=res^int(c);
    }
    return res;
}

int main(){
    cout<<findTheDifference_XOR("abcd", "abcde")<<endl;
    cout<<findTheDifference_ASCII("abcd", "abcde");
    return 0;
}