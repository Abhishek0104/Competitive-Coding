#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, m;
        cin >> n >> m;
        long long q;
        q = (m^n) | m;
        cout << q << endl;
    }
}
