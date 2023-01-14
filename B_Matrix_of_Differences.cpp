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
        vector<vector<int>> a(n,vector<int> (n,0));
        bool ans = true, res = true;;
        int low = 1,high = n*n;
        for(int i = 0;i<n;i++){
            if(res){
                rep(j,0,n){
                    if(ans){
                        a[i][j] = low;
                        low++;
                        ans=false;
                    }
                    else{
                        a[i][j] = high;
                        high--;
                        ans = true;
                    }
                }
                res =false;
            }
            else{
                rrep(j,n){
                    if(ans){
                        a[i][j] = low;
                        low++;
                        ans=false;
                    }
                    else{
                        a[i][j] = high;
                        high--;
                        ans = true;
                    }
                }
                res = true;
            }
        }
        rep(i,0,n){
            rep(j,0,n){
                cout<<a[i][j]<<" ";
            }cout<<en;
        }
        // cout<<en;
    }
    return 0;
}