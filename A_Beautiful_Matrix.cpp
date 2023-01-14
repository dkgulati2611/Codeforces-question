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
    int c,b;
    vector<vector<int>> a(5,vector<int>(5));
    for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
            cin>>a[i][j];
            if(a[i][j] == 1){
                c = i;
                b = j;
            }
        }
    }
    int ans = abs(b-2) + abs(c-2);
    cout<<ans<<en;


    return 0;
}