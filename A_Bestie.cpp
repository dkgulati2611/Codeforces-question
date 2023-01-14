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
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);
        int gcd = 0;
        rep(i,0,n){
            cin>>a[i];
            gcd = __gcd(gcd,a[i]);
        }
        if(gcd == 1){
            cout<<0<<en;
        }
        else if(__gcd(gcd,n) == 1){
            cout<<1<<en;
        }
        else if(__gcd(gcd,n-1) == 1){
            cout<<2<<en;
        }
        else{
            cout<<3<<en;
        }
    }
    return 0;
}