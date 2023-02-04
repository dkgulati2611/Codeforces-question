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
        int n,s,r;
        cin>>n>>s>>r;
        vector<int> ans(n);
        vector<int> res;
        int first = s-r;
        ans[n-1] = first;
        rep(i,0,n-1){
            ans[i] = 1;
            r--;
        }
        int i = 0;
        while(r>0){
            if(ans[i]<first){
                ans[i]++;
                r--;
            }
            else{
                i++;
            }
        }
        rep(i,0,n){
            cout<<ans[i]<<" ";
        }
        cout<<en;
    }
    return 0;
}