#include<bits/stdc++.h>
using namespace std;
vector<int> fiboiter(int num){
    vector<int> ans;
    int first=0, second=1, third;
    for(int i=1; i<=num; i++){
        ans.push_back(first);
        third=first+second;
        first=second;
        second=third;
    }
    return ans;
}
int main(){
    vector<int> ans = fiboiter(10);
    for(int it:ans){
        cout<<it<<"  ";
    }
    cout<<"\n";
    return 0;
}