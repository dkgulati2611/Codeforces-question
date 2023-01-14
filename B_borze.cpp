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
    string s;cin>>s;
    string ans = "";
    for(int i = 0;i<s.length();i++){
        if(s[i] == '.'){
            ans += '0';
        }
        else if(s.substr(i,2) == "-."){
            ans += '1';
            i++;
        }
        else if(s.substr(i,2) == "--"){
            ans += '2';
            i++;
        }
    }
    cout<<ans<<en;
    return 0;
}