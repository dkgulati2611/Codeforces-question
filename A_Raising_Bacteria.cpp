#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define en '\n' 
#define pi (3.141592653589)
#define mod 1e9+7
#define all(c) c.begin(), c.end()
#define rrep(i, n) for(int i=n-1;i>0;i--)
#define rep(j,i,n) for(int j = i;j<n;j++)

int main()
{
   long long x,count=0;
    cin>>x;

    while(x/2!=0)
    {
        if(x%2==1)
            count++;

        x=x/2;
    }

    cout<<count+1;
    return 0;
}