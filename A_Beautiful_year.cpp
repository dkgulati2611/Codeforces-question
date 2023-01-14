#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define en '\n' 
#define pi (3.141592653589)
#define mod 1e9+7
#define all(c) c.begin(), c.end()
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(j,i,n) for(int j = i;j<n;j++)
bool sol(int n){
    set<int>s;
    int size = 0;
    while(n){
        int k = n%10;
        size++;
        s.insert(k);
        n/=10;
    }
    return (s.size() == size);
}
int main()
{
    int n;cin>>n;
    n+=1;
    while(!sol(n)){
        n++;
    }
    cout<<n<<endl;
    return 0;
}