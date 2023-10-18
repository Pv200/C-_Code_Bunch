#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        char arr[25][25];
        for(int i=0;i<a;i++ ){
            for(int j=0;j<b;j++){
                cin>>arr[i][j];
            }
        }
        int count_v=0;
        int count_i=0;
        int count_k=0;
        int count_a=0;
 
        for(int j=0;j<b;j++ ){
            for(int i=0;i<a;i++){
                if(arr[i][j]=='v' && count_v==0){
                    count_v++;
                    break;
                }
                if(arr[i][j]=='i' && count_v==1 && count_i==0){
                    count_i++;
                    break;
                }
                if(arr[i][j]=='k' && count_v==1 && count_i==1 && count_k==0){
                    count_k++;
                    break;
                }
                if(arr[i][j]=='a' && count_v==1 && count_i==1 && count_k==1 && count_a== 0){
                    count_a++;
                    break;
                }
            }
        }
        if(count_v==1 && count_i==1 && count_k==1 && count_a== 1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}
