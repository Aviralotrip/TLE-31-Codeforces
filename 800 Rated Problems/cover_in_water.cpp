#include <bits/stdc++.h>
using namespace std;

#define int long long
 

int32_t main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans = 0;
   
    for(int i = 0;i < n;i++){
        if(s[i] == '.') ans++;
    }
     for(int i = 0;i<n;i++){
       if( i>=1 && i+1<n && s[i-1] == '.' && s[i] == '.'&& s[i+1] == '.'){
        ans = 2;
        break;
       }
    } 
    cout<<ans<<endl;
    
}
}