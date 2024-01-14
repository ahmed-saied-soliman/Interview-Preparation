#include<string>
#include <iostream>
using namespace std;
string mergeAlternately(string word1, string word2) {
    int max_len=word1.size()>word2.size()?word1.size():word2.size();
    string res="";
    for(int i=0;i<max_len;i++){
        if(word1[i]){
            res.push_back(word1[i]);
        }
        if(word2[i]){
            res.push_back(word2[i]);
        }
    }
    return res;
}

string mergeAlternatelySol2(string word1, string word2) {
    int i = 0, j = 0, M = word1.size(), N = word2.size();
    string ans;
    while (i < M || j < N) {
        if (i < M) ans += word1[i++];
        if (j < N) ans += word2[j++];
    }
    return ans;
}

int main(){
    cout<<mergeAlternately("abcd","pq")<<endl;
    cout<<mergeAlternatelySol2("abcd","pq");
    return 0;
}