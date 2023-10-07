#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n;
    cin>>n;
    int num_s=0;
    int num_f=0;
    if(n<=10){
        if(n%4==0){
            num_f=n/4;
        }
        else if(n%7==0){
            num_s=n/4;
        }
        
        else{
            cout<<-1<<endl;
        }
    }
    else if((n%7==0)){
        num_s=n/7;
        
        
    }
    
    else{
        
        while(n>0){
            n-=4;
            num_f++;
            if(n%7==0){
                num_s=n/7;
                n-=n;
            }
        } 
    }
 
    for(int i{0};i<num_f;i++){
        cout<<4;
    }
    for(int i{0};i<num_s;i++){
        cout<<7;
    }
    
    return 0;
 
}
