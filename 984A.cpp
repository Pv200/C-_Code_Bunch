#include <bits/stdc++.h>
#include <vector>

using namespace std;
 
int main(){
    
    int n;
    cin>>n;
    
    vector<int> v;
    
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        
        v.push_back(ele);
        
    }
    
    sort(v.begin(),v.end());
    int s=0;
    int e=v.size()-1;
    
    int mid=s+((e-s)/2);
    
    
    cout<<v[mid];
    
    
    return 0;
    
}
