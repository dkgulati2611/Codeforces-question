//Silent26Knight aka DKG
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
        int n;cin>>n;
        string s;
        cin>>s;
        map<int,vector<int>> mp;
        rep(i,0,s.length()){
            mp[s[i]].push_back(i);
        }
        bool flag = true;
        for(auto it : mp){
            rep(i,1,it.second.size()){
                if((it.second[i] - it.second[i-1])%2 != 0){
                    flag = false;
                } 
            }
        }
        if(flag){
            cout<<"YES"<<en;
        }
        else{
            cout<<"NO"<<en;
        }
    }
    return 0;
}