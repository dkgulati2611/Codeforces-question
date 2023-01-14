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
    long long int n,m,a;
    cin>>n>>m>>a;
    long long int d = n/a;
    if(n%a !=0){
        d++;
    }
    long long int c = m/a;
    if(m%a != 0){
        c++;
    }
    cout<<c*d<<en;
    return 0;
}