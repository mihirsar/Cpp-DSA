#include<bits/stdc++.h>
using namespace std;
void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> ans;
    for(int i=0; i<n; i++){
        ans.insert(nums.begin()+k+i, nums[i]);
    }
    for(int i=0; i<k; i++){
        ans.insert(nums.begin()+i, nums[n-k+i]);
    }
    ans = nums;        
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    int k=3, n=arr.size();
    rotate(arr, k);
    cout<<"Array is: \n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}