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
    int sumx=0,sumy=0,sumz =0;
    rep(i,0,n){
        int a,b,c;
        cin>>a>>b>>c;
        sumx += a;
        sumy += b;
        sumz += c;
    }
    if(sumx== 0 && sumy == 0 && sumz == 0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;

}