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
        string s;cin>>s;
        long long ans = 0;
        vector<vector<long long>> dp(n,vector<long long>(26,0));

        dp[0][s[0]-'a']++;
        rep(i,1,n){
            rep(j,0,26){
                dp[i][j] = dp[i-1][j];
                if(j == s[i]-'a')
                dp[i][j]++;
            }
        }
        rep(i,1,n){
            long long temp1 = 0,temp2 = 0;
            rep(j,0,26){
                if(dp[i-1][j] != 0){
                    temp1++;
                }
                if(dp[n-1][j] != dp[i-1][j]){
                    temp2++;
                }
            }
            ans = max(ans,temp1+temp2);
        }
        cout<<ans<<en;
    }
    return 0;
}