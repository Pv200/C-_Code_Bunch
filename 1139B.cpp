#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i{0};i<n;i++){
        cin>>arr[i];
    }
    
    long long c=arr[n-1];
    for(int i{n-2};i>=0;i--){
        int x=arr[i+1];
        
        int xi=min(x-1,arr[i]);
        //cout<<xi<<" "<<x<<endl;
        if(xi<0){
            xi=0;
        }
        arr[i]=xi;
        c+=xi;

        
    }
    
    cout<<c<<endl;

    return 0;
}