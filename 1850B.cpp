#include <bits/stdc++.h>
using namespace std;

int numArr(int arr[][2],int n){
    
    
    for(int i=0;i<n;i++){
        if(arr[i][0]>10){
            arr[i][0]=-1;
            arr[i][1]=-1;
        }
        
    }
    int ele=arr[0][1];
    int index=0;
    for(int i{0};i<n;i++){
        if(ele<arr[i][1]){
            index=i;

            ele=arr[i][1];


        }
        
    }
    
    return index;


}

int main(){
    int test;
    cin>>test;

    while(test--){
        int n;
        cin>>n;

        int arr[n][2];

        for(int i{0};i<n;i++){
            for(int j{0};j<2;j++){
                cin>>arr[i][j];
            }
        }
        int num1=numArr(arr,n);

        cout<<num1+1<<endl;
    }

    return 0;
}
