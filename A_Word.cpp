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
    int countU = 0,countL = 0;
    rep(i,0,s.length()){
        if(s[i] >= 65 && s[i] <= 90){
            countU++;
        }
        else{
            countL++;
        }
    }
    string ans = "";
    if(countL >= countU){
        rep(i,0,s.length()){
            ans+=tolower(s[i]);
        }
    }
    else{
        rep(i,0,s.length()){
            ans+=toupper(s[i]);
        }
    }
    cout<<ans<<en;
    return 0;
}