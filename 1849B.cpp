#include <bits/stdc++.h>
#define ios ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main(){
    ios
    long long t;
    cin>>t;

    while(t--){
        long long n,k;
        cin>>n>>k;

        vector<pair<int,int>> v;
        
        for(int i{0};i<n;i++){
            long long ele;
            cin>> ele;

            if(ele%k==0){
                cout<<i+1<<" ";
            }
            else{
                v.emplace_back(ele%k,-1*(i+1));
            }
            
        }
        sort(v.rbegin(),v.rend());

        for(int i{0};i<v.size();i++){
            if(v[i].first!=0){
                cout<<-1*v[i].second<<" ";
            }
        }

        cout<<'\n';
    }
    return 0;
}