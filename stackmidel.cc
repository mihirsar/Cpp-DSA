#include<bits/stdc++.h>
using namespace std;

void delMidHelper(stack<int>& st, int cnt, int insize){
    if(cnt==insize/2){
        st.pop();
        return;
    }
    int num = st.top();
    st.pop();
    delMidHelper(st, cnt+1, insize);
    st.push(num);
}
void delMidRecursive(stack<int> &s, int size){
    int count=0;
    delMidHelper(s, count, size);
}
void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        stack<int> temp;
        int mid = (sizeOfStack/2), cnt;
        for(cnt=0; cnt<=mid; cnt++){
            int num = s.top();
            s.pop();
            temp.push(num);
        }
        temp.pop();
        while(!temp.empty()){
            int num = temp.top();
            temp.pop();
            s.push(num);
        }
    }
int main(){
    stack<int> stt;
    stt.push(40); stt.push(30); stt.push(20); stt.push(10);
    // cout<<"Before deleting\nStack =";
    // while(!stt.empty()){
    //     int num = stt.top();
    //     cout<<" "<<num;
    //     stt.pop();
    // }
    delMidRecursive(stt, stt.size());
    std::cout<<"\nAfter deleting\nStack =";
    while(!stt.empty()){
        int num = stt.top();
        cout<<" "<<num;
        stt.pop();
    }
    return 0;
}