#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n;
    cin>>n;
 
    vector<int> v;
 
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
 
        int ele_abs=abs(ele);
 
        v.push_back(ele_abs);
    }
 
    sort(v.begin(),v.end());
 
    int min_op=v[0];
 
    cout<<min_op<<endl;
 
    return 0;
}
