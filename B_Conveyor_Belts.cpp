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

long long solve(int x,int y,int n){
    x--;y--;
    x =min(x,n-x-1);
    y = min(y,n-y-1);
    return min(x,y);
}
int main()
{
    int t;cin>>t;
    while(t--){
        long long n,x1,y1,x2,y2;
        cin>>n>>x1>>y1>>x2>>y2;
        cout<<abs(solve(x1,y1,n) - solve(x2,y2,n))<<en;
    }
    return 0;
}
