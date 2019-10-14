#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int XOR(int a, int b)
{
    return (a|b) & (~a|~b);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n;
        cin >> k;
        int a[n];
        int i, p;

        for(i = 0; i < n; i++)
            cin >> a[i];
        for(i =0; i < k; i++)
        {
            p = i%n;
            a[p] = XOR(a[p], a[n-1-p]);
        }

        for(i = 0; i < n; i++)\
            cout << a[i] << " ";

        cout << endl;
    }
}
