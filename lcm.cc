#include<bits/stdc++.h>
using namespace std;
int gcd(int &x, int &y){
    int ans;
    for(int i=1; i<=x && i<=y; i++){
        if(x%i==0 && y%i==0) ans=i;
    }
    return ans;
}
int lcm(int &a, int &b){
    int ans;
    int hmul = gcd(a,b);
    int ra = a/hmul;
    int rb = b/hmul;
    ans=hmul*ra*rb;
    return ans;
}
int main(){
    int a=99, b=11;
    cout<<"GCD = "<<gcd(a,b)<<endl;
    cout<<"LCM = "<<lcm(a,b)<<endl;
    return 0;
}