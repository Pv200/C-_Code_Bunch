#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,d;cin>>n>>d;
    vector<int> v;vector<int> s;
    for(int i{0};i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
        s.push_back(ele-d);
        s.push_back(ele+d);
    }
    int count=0;
    int count2=0;
    for(int i{0};i<s.size()-1;i++){
        if(s[i]>s[i+1]){
            count++;
        }else if(s[i]==s[i+1]){
            count2++;
        }
    }
    int ans=s.size()-(2*count)-count2;
    cout<<ans<<endl;
    return 0;
}