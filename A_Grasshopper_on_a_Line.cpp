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
        int x,k;cin>>x>>k;
        if(x%k != 0){
            cout<<1<<en;
            cout<<x<<en;
        }
        else{
            cout<<2<<en;
            cout<<x-1<<" "<<1<<en;
        }
    }
    return 0;
}