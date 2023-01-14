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
        int n;
        cin>>n;
        if(n == 3){
            cout<<"NO"<<en;
        }
        else if(n%2 == 1){
            cout<<"YES"<<en;
            rep(i,0,n){
                if(i%2 == 0){
                    cout<<n/2-1<<" ";
                }
                else{
                    cout<<(-n/2)<<" ";
                }
            }
            cout<<en;
        }
        else if(n %2 == 0){
            cout<<"YES"<<en;
            rep(i,0,n){
                if(i%2 == 1){
                    cout<<-1<<" ";
                }
                else{
                    cout<<1<<" ";
                }
            }
            cout<<en;
        }
        
    }
    return 0;
}