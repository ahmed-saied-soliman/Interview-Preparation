#include <vector>
#include <iostream>
#include <numeric>
#include <string>
using namespace std;

int calPoints(vector<string> &operations)
{
    vector<int> store;
    for (auto x : operations)
    {
        if (x == "C")
        {
            store.pop_back();
        }
        else if (x == "+")
        {
            store.push_back(store[store.size() - 1] + store[store.size() - 2]);
        }
        else if (x == "D")
        {
            store.push_back(store[store.size() - 1] * 2);
        }
        else
        {
            store.push_back(stoi(x));
        }
    }
    return accumulate(store.begin(), store.end(), 0);
}

int main()
{
    vector<string> operations{"5","2","C","D","+"};
    cout << calPoints(operations) << endl;
}