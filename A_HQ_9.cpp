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
    string str;
    cin>>str;
    int flag=0;
	for(int i=0;i<str.size();i++){
	    if(str[i]>=33&&str[i]<=126){
	    if(str[i]=='H'||str[i]=='Q'||str[i]=='9')
	    flag=1;
	}
	}
	if(flag){
	    cout<<"YES";
	}else{
	    cout<<"NO";
	}
    return 0;
}