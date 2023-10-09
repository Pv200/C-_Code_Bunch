#include <bits/stdc++.h>
#define ios ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main(){
    long long t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;
        long long x, z, y;

        if(n%3==0){
            x=n-5;
            y=4;
            z=1;
        }else{
            x=n-3;
            y=2;
            z=1;
        }
        if((x==y)||(x==z)){
            
            cout<<"NO"<<endl;
            
            
        }else{
            if(x>0){
                cout<<"YES"<<endl;
                cout<<x<<" "<<y<<" "<<z<<endl;
            }else{
                cout<<"NO"<<endl;
            }
            
        }
        
    }
    return 0;
}
