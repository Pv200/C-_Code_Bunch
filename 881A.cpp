#include <bits/stdc++.h>
#define ios ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main(){
    ios
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for(int i{0};i<n;i++){
            int ele;
            cin>> ele;
            v.push_back(ele);
        } 

        sort(v.begin(),v.end());
        int sum=0;
        int s=0;
        int e=v.size()-1;
        while(s<=e){
            sum+=v[e]-v[s];
            e--;
            s++;
            
        }

        cout<<sum<<'\n';

    }

    return 0;
}