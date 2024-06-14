#include<bits/stdc++.h>
using namespace std;

string antivowel(string &str){
    // vector<char> vow = {'a', 'e', 'o', 'i', 'u'};
    string temp = str, ans="";
    // transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
    for(char s: temp){
        if(tolower(s)!='a' && tolower(s)!='e' && tolower(s)!='i' && tolower(s)!='o' && tolower(s)!='u') ans+=s;
    }
    return ans;
}
int main(){
    string str = "hello WOrld";
    cout<<"str w/o vowel is : "<< antivowel(str)<<endl;
    return 0;
}