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
        long long n,q;
        cin>>n>>q;
        vector<long long> a(n);
        long long sum = 0;
        rep(i,0,n){
            cin>>a[i];
            sum += a[i];
        }
        vector<long long> prefix(n);
        prefix[0] = a[0];
        rep(i,1,n){
            prefix[i] = prefix[i-1] + a[i];
        }
        long long temp;
        rep(i,0,q){
            long long l,r,k;
            cin>>l>>r>>k;
            long long totalAdd = (r-l+1)*k;
            long long val = prefix[r-1]-(prefix[l-1]-a[l-1]);
            // cout<<val<<" ";
            temp = sum + totalAdd - val;
            if(temp%2 == 1){
                cout<<"YES"<<en;
            }
            else{
                cout<<"NO"<<en;
            }
        }



    }
    return 0;
}