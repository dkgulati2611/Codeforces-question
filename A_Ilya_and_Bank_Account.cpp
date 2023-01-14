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
    int n;cin>>n;
    if(n>0){
        cout<<n<<en;
    }
    else{
        int temp = n;
        int res1 = n/10;
        int res2 = n/100 * 10 + n%10;
        int res = max(res1,res2);
        cout<<res<<en;
    }
    return 0;
}