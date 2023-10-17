#include<bits/stdc++.h>
#define ios ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main(){
    ios
    long long t;
    cin>>t;
    while(t--){
        int n; cin >> n;
        
        int f = 0;
        vector<int> a;
        a.push_back(-1);
        
        for (int i = 0; i < n; i++) {
            int k; cin >> k;
            
            if (f == 0 && k >= a.back()) {
                cout << 1 ;
                a.push_back(k);
            }
            else if ((f == 0 || k >= a.back()) && k <= a[1]) {
                f = 1;
                a.push_back(k);
                cout << 1;
            }
            else {
                cout << 0;
            }
            
        }
        cout << "\n";
    }
    return 0;
}