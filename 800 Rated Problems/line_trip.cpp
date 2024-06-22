#include <bits/stdc++.h>
using namespace std;
#define int long long 
 int32_t main(){
    int maxdiff = INT_MIN;
    int diff = 0;
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> a;
        a.push_back(0);
        for(int i = 0;i<n;i++){
            int num;
            cin >> num;
            if(num == 0 || num>=x) break;
            a.push_back(num);
        }
        a.push_back(x);
        for(int i = 0;i<a.size();i++){
            if(i+1 < a.size()) {
                diff = a[i+1] - a[i];
            }
            if(i+2 == a.size() ){
                diff = 2*(a[i+1] - a[i]);
            }
            maxdiff = max(diff,maxdiff);
        }
        cout<<maxdiff<<endl;
        maxdiff = INT_MIN;
        diff = 0;
    }
 };