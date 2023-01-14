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
    string ans="";
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y') continue;
        else {
            ans+='.';
            ans+=s[i];
        }  
    }
    cout<<ans;

    return 0;
}