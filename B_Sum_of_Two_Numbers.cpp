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
    int T=1;
    cin>>T;
    while(T--) {
        int n;
        cin>>n;
        int i=0,flag=0;
        int dig[10];
        while(n){
            dig[i]=n%10;
            n/=10;
            i++;
        }
        vector<int> a(10),b(10);
        rep(j,0,i) {
            if(dig[j]&1) {
                a[j]=dig[j]/2+flag;
                b[j]=dig[j]/2+1-flag;
                flag=1-flag;
            } else a[j]=b[j]=dig[j]/2;
        }
        int x=0, y=0,m=1;
        rep(j,0,i) {
            y+=b[j]*m,x+=a[j]*m;
            m *= 10;
        }
        cout <<x<<' '<<y<<en;
    }
    return 0;
}