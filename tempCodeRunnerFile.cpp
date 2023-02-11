
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a = sqrt(n) + 1;
        vector<int> factors;
        vector<int> st(32,1);
        // long long sum = 0;
        rep(i,0,sqrt(n)){
            int j = 0;
            while(n%i == 0){
                factors.push_back(i);
                j++;
                st[j-1] *= i;