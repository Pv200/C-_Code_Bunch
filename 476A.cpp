#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int numove;
    if(m!=n){
        if(n%2==0){
            numove=n/2;
            if(numove%m==0){
                cout<<numove<<endl;
            }
            else{
                if(numove>m){
                    int count=0;
                    for(int i{0};i<numove;i++){
                        numove+=1;
                        if(numove%m==0){
                            cout<<numove<<endl;
                            count++;
                            break;
                        }
                    }
                    if(count==0){
                        cout<<-1<<endl;
                    }
                }else{
                    int count=0;
                    for(int i{0};i<(n-numove);i++){
                        numove+=1;
                        if(numove%m==0){
                            cout<<numove<<endl;
                            count++;
                            break;
                        }
                    }
                    
                    if(count==0){
                        cout<<-1<<endl;
                    }
                }
            }
        }else{
            numove=((n-1)/2)+1;
            
            if(numove%m==0){
                cout<<numove<<endl;
            }
            else{
                if(numove>m){
                    int count=0;
                    for(int i{0};i<numove-1;i++){
                        numove+=1;
                        if(numove%m==0){
                            cout<<numove<<endl;
                            count++;
                            break;
                        }
                    }
                    
                    if(count==0){
                        cout<<-1<<endl;
                    }
                }else{
                    int count=0;
                    for(int i{0};i<(n-numove);i++){
                        numove+=1;
                        if(numove%m==0){
                            cout<<numove<<endl;
                            count++;
                            break;
                        }
                    }
                    
                    if(count==0){
                        cout<<-1<<endl;
                    }
                }
            }
        }
    }else{
        cout<<n<<endl;
    }
    return 0;

}