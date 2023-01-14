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
        if(n!=5){
            cout<<"NO"<<en;
        }
        else{
            bool ans = true;
            map<char,int> mp;
            mp['T'] = 1;
            mp['i'] = 1;
            mp['m'] = 1;
            mp['u'] = 1;
            mp['r'] = 1;
            rep(i,0,s.length()){
                if(mp.find(s[i]) == mp.end()){
                    ans = false;
                    break;
                }
                else{
                    mp[s[i]]--;
                    if(mp[s[i]]<0){
                        ans= false;
                        break;
                    }
                }
            }
            if(ans){
                cout<<"YES"<<en;
            }else{
                cout<<"NO"<<en;
            }
        }
    }
    return 0;
}