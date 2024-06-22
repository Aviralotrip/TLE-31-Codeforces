#include <bits/stdc++.h>
using namespace std;

#define int long long
 
 bool is_sorted(vector<int> arr){
    int i = 0;
    int n = arr.size();
        while(i<n){
            if(i+1<n && arr[i+1]<arr[i]){
              return false;
            }
            
            i++;
        }
        return true;
 }
 
   
 
 int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
         vector<int> arr(n);
         for(int i = 0;i<n;i++) cin>>arr[i];
         if(k == 1 && !is_sorted(arr)) cout<<"NO"<<endl;
         else cout<<"YES"<<endl;
    }
 };