#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){

    char c[100];

    cin>>c;

    

    for(int i{0};c[i]!='\0';i++){
        int count=0;

        if((int(c[i])>=65)&&(int(c[i])<=90)){

            c[i]=char(int(c[i])+32);

        }

        if(c[i]=='a'){
            c[i]='.';
            count++;
        }
        if(c[i]=='o'){
            c[i]='.';
            count++;
        }
        if(c[i]=='e'){
            c[i]='.';
            count++;
        }
        if(c[i]=='y'){
            c[i]='.';
            count++;
        }
        if(c[i]=='u'){
            c[i]='.';
            count++;
        }
        if(c[i]=='i'){
            c[i]='.';
            count++;
        }

        if(count==0){
            cout<<"."<<c[i];
        }
    }
    cout<<endl;
    

    return 0;
}