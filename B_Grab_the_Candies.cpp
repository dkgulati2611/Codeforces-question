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
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n);
        int sume= 0,sumo = 0;
        rep(i,0,n){
            cin>>a[i];
            if(a[i]%2 == 0){
                sume+=a[i];
            }
            else{
                sumo+=a[i];
            }
        }
        if(sumo >= sume){
            cout<<"NO"<<en;
        }
        else{
            cout<<"YES"<<en;
        }
            
    }
    return 0;
}