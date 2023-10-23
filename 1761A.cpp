#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n,a,b;cin>>n>>a>>b;
        if((n==a)&&(n==b)){
            cout<<"YES"<<endl;
        }else{
            n-=a+b;
            
            if((n>1)){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}