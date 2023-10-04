#include <bits/stdc++.h>
using namespace std;
void solve(int n){
    
    int h=2;
    int i=2;
    vector<int> v;
    v.push_back(i);
    i=i+2;
    v.push_back(i);
    while(h<n){
        i++;
        v.push_back(i*3);

        h++;
    }

    for(int i{0};i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        solve(n);
        cout<<endl;
    }

    return 0;
}