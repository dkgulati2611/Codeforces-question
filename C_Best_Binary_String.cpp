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
        string s;
        cin>>s;
        int n = s.length();
        string ans = "";
        char c = '0';
        rep(i,0,n){
            if(s[i] == '0' || s[i] == '1'){
                c = s[i];
                cout<<c;
            }
            else if(s[i] == '?'){
               cout<<c;
            }

        }
        cout<<ans<<en;

    }
    return 0;
}