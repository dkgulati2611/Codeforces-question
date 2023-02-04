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
        unsigned long int x;cin>>x;
        unsigned long int A = (2*x - x)/2;
        int a = 0,b =0;
        bool res = true;
        if(x%2!=0){
            cout<<-1<<en;
        }
        else{
            rep(i,0,8*sizeof(2*x)){
                unsigned long int xi = (x & (1<<i));
                unsigned long int ai = (A & (1<<i));
                if(xi == 0 && ai == 0){
                    continue;
                }
                else if(xi == 0 && ai > 0){
                    a |= (1<<i);
                    b |= (1<<i);
                }
                else if(xi > 0 && ai == 0){
                    a |= (1<<i);
                }
                else{
                    res = false;
                    break;
                }
            }
            if(!res){
                cout<<-1<<en;
            }
            else{
                cout<<a<<" " <<b<<en;
            }
        }
    }
    return 0;
}