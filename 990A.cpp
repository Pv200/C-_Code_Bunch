#include <bits/stdc++.h>


using namespace std;

int main(){
    long long t;
    cin>>t;

    while(t--){
        long long a;long long b;long long n;
        cin>>a>>b>>n;

        
        for(long long i{0};i<n;i++){
            long long x;
            cin>>x;

            b+= min(a-1,x);
            
        }
        
        
        
        cout<<b<<endl;

    }
    return 0;
}