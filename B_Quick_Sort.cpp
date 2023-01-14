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
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        rep(i,0,n){
            cin>>a[i];
        }
        int var1 = 1;
        int count = 0;
        rep(i,0,n){
            if(a[i] == var1){
                count++;
                var1++;
            }
        }
        if((n-count)%k == 0){
            cout<<(n-count)/k<<en;
        }
        else{
            cout<<(n-count)/k+1<<en;
        }
    }
    return 0;
}