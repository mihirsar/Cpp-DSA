#include <bits/stdc++.h>
using namespace std;

vector<long long> nextLargerElement(vector<long long> arr, int n){
    // Your code here
    vector<long long> v(n);
    stack<long long> s;
    for (int i = n - 1; i >= 0; i--){
        while (!s.empty() && s.top() <= arr[i]){
            s.pop();
        }
        if (s.empty()){
            v[i] = -1;
        } else {
            v[i] = s.top();
        }
        s.push(arr[i]);
    }
    return v;
}

vector<int> NGEtoLeft(vector<int>& arr, int n){

}
int main()
{

    return 0;
}