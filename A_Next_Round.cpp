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
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    rep(i,0,n)  cin>>a[i];
    sort(all(a),greater<int>());
    int z = a[k-1];
    int count  = 0;
    rep(i,0,n){
        if(a[i] >0 && a[i]>= z){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}