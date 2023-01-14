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
    int n;cin>>n;
    string s;
    cin>>s;
    int count = 0;
    rep(i,1,n){
        count++;
        if(s[i]-s[i-1]){
            count--;
        }
    }
    if(count<0 && count == -1*(n-1))    count = 0;
    cout<<count<<en;
    return 0;
}