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
        int n;cin>>n;
        vector<vector<int>> ans(2,vector<int> (n));
        int k = 2*n;
        ans[0][0] = k--;
        ans[1][n-1] = k--;
        int x = 1;
        rep(i,1,n-1){
            if(x==0){
                ans[0][i] = k;
                x = 1;
            }
            else{
                ans[1][i] = k;
                x=0;
            }
            k--;
        }
        x= 1;
        rep(i,0,n){
            if(x==0){
                ans[0][i] = k;
                x = 1;
            }
            else{
                ans[1][i] = k;
                x=0;
            }
            k--;
        }
        rep(i,0,2){
            rep(j,0,n){
                cout<<ans[i][j] << " ";
            }
            cout<<en;
        }
    }
    return 0;
}