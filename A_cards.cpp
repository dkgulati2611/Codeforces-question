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
    string s;
    cin>>s;
    map<char,int> mp;
    for(int i = 0;i<n;i++){
        mp[s[i]]++;
    }
    int a = mp['n'];
    int b = mp['o'];
    for(int i = 0;i<a;i++){
        cout<<1<<" ";
    }
    for(int i = 0;i<b-a;i++){
        cout<<0<<" ";
    }
    

    return 0;
}