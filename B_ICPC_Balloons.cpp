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
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        string s;
        cin>>s;
        map<char,int> mp;
        int ans = 0;
        rep(i,0,s.length()){
            if(mp.find(s[i]) == mp.end()){
                mp[s[i]]++;
            }
            else{
                mp[s[i]]++;
            }
        }
        for(auto it:mp){
            if(it.second == 1){
                ans += 2;
            }
            else{
                ans += it.second;
                ans++;
            }
        }
        cout<<ans<<en;
    }
    return 0;
}