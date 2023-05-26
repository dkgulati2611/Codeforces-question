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
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int j = 0;
        rep(i,1,n+1){
            if(i*(i+1)/2 <= k){
                cout<<2<<" ";
                j = i;
            }
            else{
                break;
            }
        }
        k -= j*(j+1)/2;
        if(k>0){
            cout<< (-2*j + 2*k - 1)<<" ";
            j++;
        }
        rep(i,j+1,n+1){
            cout<<-1000<<" ";
        }
        cout<<en;
    }
    return 0;
}