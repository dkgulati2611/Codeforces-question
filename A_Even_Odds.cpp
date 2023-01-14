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
    long long n,k;
    cin>>n>>k;
    
    if(k>(n+1)/2){
        cout<<2*(k-(n+1)/2)<<en;
    }
    else{
        cout<<2*k -1<<en;
    }
    return 0;
}