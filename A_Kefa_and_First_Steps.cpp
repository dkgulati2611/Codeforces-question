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
    vector<int> arr(n);
    for(auto &it : arr){
        cin>>it;
    }
    int max = 1, len = 1;
     
    for (int i=1; i<n; i++)
    {
        if (arr[i] >= arr[i-1])
            len++;
        else
        {
            if (max < len)   
                max = len;
            len = 1;   
        }   
    }
    if (max < len)
        max = len;
    cout<<max<<en;
    return 0;
}