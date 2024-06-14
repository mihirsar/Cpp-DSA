#include<bits/stdc++.h>
using namespace std;
void largeandsecondl(vector<int> & vec){
    int largest=INT_MIN, secondl=INT_MIN;
    for(int it:vec){
        if(largest<it){
            secondl=largest;
            largest=it;
        }else if(it<largest && it>secondl){
            secondl=it;
        }
    }
    cout<<"LARGEST = "<<largest<<" AND SECOND LARGEST = "<<secondl<<endl;
    if(secondl==INT_MIN) cout<<"SECONDLARGEST DONT EXIST IF PRINTED INT_MIN"<<endl;
}
int main(){
    vector<int> vec = {1,2,3,4,5,6,7,8,9,0,10};
    largeandsecondl(vec);
    return 0;
}