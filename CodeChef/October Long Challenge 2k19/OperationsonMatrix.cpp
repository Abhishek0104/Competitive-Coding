#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, k, i, j;
        cin >> n;
        cin >> m;
        cin >> k;
        int a[n][m];
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
                a[i][j] = 0;
        }

        while(k--)
        {
            int x, y;
            cin >> x;
            cin >> y;
            x--;
            y--;
            for(i = 0; i < m; i++)
                a[x][i] = a[x][i] == 0 ? 1:0;
            for(i = 0; i < n; i++)
                a[i][y] = a[i][y] == 0 ? 1:0;
        }
        int sum = 0;
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
                sum += a[i][j];
        }
        cout << sum << endl;
    }
}
