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
    int t;
    cin>>t;
    while(t--){
        long long n;cin>>n;
        vector<long long> a(n);
        long long s1=0,s2=0;
        for(int i = 0;i<n;i++){
            cin>>a[i];
            if(a[i] < 0){
                s1+=a[i];
            }
            else{
                s2 += a[i];
            }
        }
        cout<<abs(abs(s2) - abs(s1))<<en;
    }
    return 0;
}