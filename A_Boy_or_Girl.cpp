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
    string s;cin>>s;
    map<char,int> mpp;
    for(int i = 0;i<s.length();i++){
        mpp[s[i]]++;
    }
    if(mpp.size()%2 ==0){
        cout<<"CHAT WITH HER!"<<en;
    }else{
        cout<<"IGNORE HIM!"<<en;
    }
    return 0;
}