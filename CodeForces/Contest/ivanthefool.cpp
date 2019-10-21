#include<bits/stdc++.h>
using namespace std;
#define max 1000000007
int main()
{
    int n, m;
    long long ans;
    cin >> n >> m;
    ans = (long long)n*(n-1) + (long long)m*(m-1);
    cout << ans%max;
}
