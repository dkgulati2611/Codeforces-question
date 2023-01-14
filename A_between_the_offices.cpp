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
    int n;
    cin>>n;
    string s;cin>>s;
    int f = 0,se =0;
    for(int i = 1;i<s.length();i++){
        if(s[i-1]=='F' && s[i] == 'S'){
            f++;
        }
        else if(s[i-1]=='S' && s[i] == 'F') se++;
        else{
            continue;
        }
    }
    if(se>f){
        cout<<"YES"<<en;
    }
    else{
        cout<<"NO"<<en;
    }
    return 0;
}