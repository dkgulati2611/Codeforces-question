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
        string ans = "";
        while(n>0){
            int rem = n%9;
            if(rem >= 4){
                rem ++;
            }
            ans = to_string(rem) + ans;
            n/=9;
        }
        cout<<ans<<en;
    }
    return 0;
}