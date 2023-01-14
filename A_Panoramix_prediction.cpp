#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define en '\n' 
#define pi (3.141592653589)
#define mod 1e9+7
#define all(c) c.begin(), c.end()
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(j,i,n) for(int j = i;j<n;j++)
bool isPrime(int n)
{
    if (n <= 1)  return false;
    if (n <= 3)  return true;
    if (n%2 == 0 || n%3 == 0) return false;
   
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
   
    return true;
}

int nextPrime(int N)
{
    if (N <= 1)
        return 2;
 
    int prime = N;
    bool found = false;
    while (!found) {
        prime++;
 
        if (isPrime(prime))
            found = true;
    }
 
    return prime;
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<(m== nextPrime(n) ? "YES" : "NO")<<en;
    return 0;
}