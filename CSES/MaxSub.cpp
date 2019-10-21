#include<bits/stdc++.h>
using namespace std;
#define max(a, b) (a>b) ? a:b
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i< n; i++)
        cin >> a[i];
    int best = 0;
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum = max(sum+a[i], a[i]);
        best = max(best, sum);
    }
    cout << best;
}
