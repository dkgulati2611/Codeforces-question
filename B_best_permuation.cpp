#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define en '\n' 
#define pi (3.141592653589)
#define mod 1e9+7
#define all(c) c.begin(), c.end()
#define rrep(i, j,n) for(int i=n-1;i>=j;i--)
#define rep(j,i,n) for(int j = i;j<n;j++)
int main()
{
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2){
            rrep(i,2,n-2){
                cout<<i<<" ";
            }
            cout<<n-2<<" "<<1<<" "<<n-1<<" "<<n<<en;
        }
        else{
            for(int i = 1;i<=n-2;i+=2){
                cout<<i+1<<" "<<i<<" ";
            }
            cout<<n-1<<" "<<n<<en;
        }
    }
    return 0;
}