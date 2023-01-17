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
        long long n;cin>>n;
        if(n&1){
            long long ans=1e9;
            pair<long long,long long> val;
            for(long long i=2;i*i<=n;i++){
                if(n%i==0){
                    long long x= n/i;
                    long long y= i;
                    long long l1= x*(n-x)/__gcd(x,n-x);
                    long long  l2= y*(n-y)/__gcd(y,n-y);
                    if(l1<ans){
                        ans=l1;
                        val.first=x, val.second=n-x;
                    } 
                    if(l2<ans){
                        ans=l2;
                        val.first=y, val.second=n-y;
                    }
                }
            }
            if(n<ans){
                val.first=1, val.second=n-1;
            }
        
            cout<<val.first<<" "<<val.second<<endl; 
        }
        else{
            cout<<n/2<<" "<<n/2<<en;
        }
    }
    return 0;
}