#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define en '\n' 
#define pi (3.141592653589)
#define mod 1e9+7
#define all(c) c.begin(), c.end()
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(j,i,n) for(int j = i;j<n;j++)
char x(char a,char b){
    if(a==b) return '0';
    else return '1';
}
int main(){
    string a,b;
    cin>>a>>b;
    string c="";
    for(int i=0;i<a.size();i++){
        c=c+x(a[i],b[i]);
    }
    cout<<c<<en;
    return 0;
}   