#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define en '\n' 
#define pi (3.141592653589)
#define mod 1e9+7
#define all(c) c.begin(), c.end()
#define rrep(i, n) for(int i=n;i>=1;i--)
#define rep(j,i,n) for(int j = i;j<n;j++)
int dk[2][100001];
char s[100010];
int main()
{
    fastio();
    int t;
    cin>>t;
    while(t--){
        int n,k;cin>>n;
        cin>>s+1;
        dk[0][n+1] = dk[1][n+1] = 0;
        rrep(i,n){
            k = s[i] - '0';
            dk[k][i] = dk[k][i+1];
            dk[1-k][i] = dk[k][i+1] +1;
        }
        int opr = 0,ans = 1e9,sum=0;
        rep(i,1,n+1){
            ans = min(ans,dk[1-opr][i+1] + sum);
            k = s[i] - '0';
            if((opr == 0 && k) || (opr == 1 && !k)){
                sum++;
                opr = 1-opr;
            }
        }
        cout<<ans<<en;
    }
    return 0;
}