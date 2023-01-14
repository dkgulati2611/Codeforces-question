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
    if(n%4 == 1){
        cout<<0<<" A"<<en;
    }
    else if(n%4 == 2){
        cout<<1<<" B"<<en;
    }
    else if(n%4 == 3){
        cout<<2<<" A"<<en;
    }
    else{
        cout<<1<<" A"<<en;
    }
    return 0;
}