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
    string s;
    cin>>s;
    string a = "";
    string ans= "";
    for(int i = 0;i<s.length();i++){
        if(isdigit(s[i])){
            a += s[i];
        }
        else continue;
    }
    sort(a.begin(),a.end());
    int j = 0;
    for(int i = 0;i<s.length();i++){
        if(isdigit(s[i])){
            ans+=a[j++];
        }
        else {
            ans += s[i];
        }
    }
        cout<<ans<<en;
    return 0;
}