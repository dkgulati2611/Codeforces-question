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
    int t;cin>>t;
    while(t--){
        long long n;cin>>n;
        if(n%2 == 0){
            cout<<-1<<en;
        }
        else{
            vector<int>a;
            int count = 0;
            while(n!=1){
                n /= 2;
                if(n%2 == 1){
                    a.push_back(2);
                }
                else{
                    a.push_back(1);
                    n+=1;
                }
            }
            reverse(all(a));
            cout<<a.size()<<en;
            rep(i,0,a.size())   cout<<a[i]<<" ";
            cout<<en;
        }
    }
    return 0;
}