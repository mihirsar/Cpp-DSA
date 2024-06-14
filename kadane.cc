#include<bits/stdc++.h>
using namespace std;
int kadane(vector<int> vec){// returns max subarray sum
    int maxsofar=INT_MIN, maxtillhere=0;
    for(int i=1; i<vec.size(); i++){
        maxtillhere = maxtillhere+vec[i];
        if(maxsofar<maxtillhere){
            maxsofar=maxtillhere;
        }
        if(maxtillhere<0) maxtillhere=0;
    }
    return maxsofar;
}

int kadanicindices(vector<int> vec){
    int maxsofar=INT_MIN, maxtillhere=0, k, j;
    for(int i=0; i<vec.size(); i++){
        maxtillhere = maxtillhere+vec[i];
        if(maxsofar<maxtillhere) maxsofar=maxtillhere;
        if(maxtillhere<0) maxtillhere=0;
    }
}
int main(){

    return 0;
}