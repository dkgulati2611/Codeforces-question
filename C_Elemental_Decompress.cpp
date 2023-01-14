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
        int n;cin>>n;
        vector<int> a(n);
        rep(i,0,n){
            cin>>a[i];
        }
        vector<int> per1(n,0),per(n,0),b(n+1,-1),c(n+1,-1);
        rep(i,0,n){
            if(b[a[i]] == -1){
                b[a[i]] = i;
                per[i] = a[i];
            }
            if(c[a[i]] == -1){
                c[a[i]] = i;
                per[i] = a[i];
            }

        }
    }
    return 0;
}