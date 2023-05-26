//Silent26Knight aka DKG
#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define en '\n' 
#define ll long long 
#define pi (3.141592653589)
#define mod 1e9+7
#define all(c) c.begin(), c.end()
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(j,i,n) for(int j = i;j<n;j++)
int main()
{
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        if(s.length()==1 && s[0]=='^') cout<<1<<en;
        else{
            int cnt = 0;
            if(s[0] == '_'){
                cnt++;
            }
            if(s[s.length()-1] == '_'){
                cnt++;
            }
            rep(i,0,s.length()-1){
                if(s[i] == '_' && s[i+1] != '^'){
                    cnt++;
                }
            }
            cout<<cnt<<en;
        }

    }
    return 0;
    
}