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
        cout<<n/2 + n%2 <<en;
        if(n>=3){
            int l = 1,r = 3*n;
            while(l<r){
                cout<<l<<" "<<r<<en;
                l+=3;
                r-=3;
            }
        }
        else{
            cout<<1<<" "<<3*n<<en;
        }
        
    }
    return 0;
}