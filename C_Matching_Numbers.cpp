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
        if(n&1){
            cout<<"YES"<<en;
            if(n==1){
                cout<<1<<" "<<2<<en;
            }
            else{
                int k = n,l = n+2;
                while(l<=2*n){
                    cout<<k<<" "<<l<<en;
                    k--;l+=2;
                }
                l = n+1;
                while(k>0){
                    cout<<k<<" "<<l<<en;
                    k--;l+=2;
                }
            }
                        
        }
        else{
            cout<<"NO"<<en;
        }
    }
    return 0;
}