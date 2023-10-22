#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int x;int k;cin>>x>>k;
        
        
        for(int i{0};i<2*k;i++){
            int sum=0;
            string xstr=to_string(x);
            for(int j{0};j<xstr.length();j++){
                sum+=int(xstr[j]-'0');

            }
            
            if(sum%k==0){
                cout<<x<<endl;
                break;
            }else{
                x+=1;
            }
        }
        
    }
    return 0;
}