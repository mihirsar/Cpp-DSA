#include<bits/stdc++.h>
using namespace std;

int gcd(int &a, int &b){
    int gcd;
    for(int i=1; i<=a && i<=b; i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
    return gcd;
}
int main(){
    int a=24, b=60;
    cout<<gcd(a,b)<<endl;
    return 0;
}