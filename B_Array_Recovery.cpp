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
        vector<int> d(n),a(n);
        for(auto &it : d){
            cin>>it;
        }
        a[0] = d[0];
        bool ans = true;
        rep(i,1,n){
            if(a[i-1] + d[i] > 0 && a[i-1] - d[i] > 0 && a[i-1] + d[i]!= a[i-1]-d[i]){
                ans = false;
            }
            else{
                a[i] = max(a[i-1]+d[i], a[i-1]-d[i]);
            }
        }
        if(ans){
            rep(i,0,n){
                cout<<a[i]<<" ";
            }cout<<en;
        }
        else{
            cout<<-1<<en;
        }
    }
    return 0;
}