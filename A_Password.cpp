#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define en '\n' 
#define pi (3.141592653589)
#define mod 1e9+7
#define all(c) c.begin(), c.end()
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(j,i,n) for(int j = i;j<n;j++)
int fact(int n){
return std::tgamma(n + 1);
}
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);
        rep(i,0,n){
            cin>>a[i];
        }
        long ans = fact(10-n)/(fact(2)* fact(10-n-2));
        cout<<ans*6<<en;

    }
    return 0;
}