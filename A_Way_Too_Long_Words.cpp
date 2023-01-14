#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define en '\n' 
#define pi (3.141592653589)
#define mod 1e9+7
#define all(c) c.begin(), c.end()
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(j,i,n) for(int j = i;j<n;j++)
int main()
{
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        string ans = "";
        if(s.length() > 10){
            ans = s[0];
            ans += to_string(s.length()-2);
            ans += s[s.length()-1];
        }
        else{
            ans = s;
        }
        cout<<ans<<endl;
    }
    return 0;
}