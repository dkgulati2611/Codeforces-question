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
        int n,d;
        cin>>n>>d;
        string s;
        cin>>s;
        string ans;
        int j = -1;
        rep(i,0,n){
            if(s[i] < d + '0'){
                j = i;
                break;
            }
        }
        if(j == -1){
            cout<<s<<d<<en;
        }
        else{
            s.insert(j,to_string(d));
            cout<<s<<en;
        }
    }
    return 0;
}