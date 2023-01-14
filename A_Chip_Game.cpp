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
        long long n,m;
        cin>>n>>m;
        if((n%2==0 && m%2 == 0) || (n ==1 && m==1) || (n%2!=0 && m%2 != 0)){
            cout<<"Tonya"<<en;
        }
        else{
            cout<<"Burenka"<<en;
        }
    }
    return 0;
}