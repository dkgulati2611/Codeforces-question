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
        long long n;
        cin>>n;
        
        long long ans = sqrtl(n);
        if(ans*ans == n){
            cout<<ans-1<<en;
        }
        else{
            cout<<ans<<en;
        }
    }
    return 0;
}