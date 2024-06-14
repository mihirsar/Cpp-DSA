#include<bits/stdc++.h>
using namespace std;

int findMax(vector<int> &v) {
    int maxi = INT_MIN;
    int n = v.size();
    //find the maximum:
    for (int i = 0; i < n; i++) {
        maxi = max(maxi, v[i]);
    }
    return maxi;
}

int totalhours(vector<int>& piles, int rate){
    int tothrs=0;
    for(int i=0; i<piles.size(); i++){
        tothrs+=ceil((double)piles[i]/rate);
    }
    return tothrs;
}

int mineatrate(vector<int>& piles, int h){
    int hi = findMax(piles);
    int lo=1;
    int mid=lo+(hi-lo)/2;
    while(lo<hi){
        int tothrsneeded = totalhours(piles, mid);
        if(tothrsneeded>h){
            lo=mid+1;
        }else{
            hi=mid;
        }
        mid=lo+(hi-lo)/2;
    }
    // for(int i=1; i<=maxi; i++){
    //     int reqtime = totalhours(piles, i);
    //     if(reqtime<=h) return i;
    // }
    return lo;
}

int main(){
    vector<int> piles = {7, 15, 6, 3};
    int h=8;
    int ans = mineatrate(piles, h);
    cout<<"Ans is: "<<ans<<endl;

    return 0;
}