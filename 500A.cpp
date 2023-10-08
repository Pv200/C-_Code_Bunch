#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n;ll t;
    cin>>n>>t;
    vector<ll> v;
    for(ll i=0;i<n-1;i++){
        ll ele;
        cin>>ele;

        v.push_back(ele);
    }
    int ans=-1;
    for(int i{0};i<v.size()+1;i+=v[i]){
        //cout<<i<<" ";
        if(i+1==t){
            ans=1;
            break;
        }
        if(i==v.size()){
            break;
        }
    }
    if(ans==-1){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }

    return 0;


}