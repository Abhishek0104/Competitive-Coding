#include<bits/stdc++.h>
using namespace std;
int row[100005], col[100005];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n, m, q, i;
        cin >> n >> m >> q;

        for(i = 1 ; i <= n; i++)
            row[i] = 0;
        for(i = 1; i< m; i++)
            col[i] = 0;
        long long int x, y;
        while(q--)
        {
            cin >> x >> y;
            row[x]++;
            col[y]++;
            row[x] %= 2;
            col[y] %= 2;
        }
        long long int a, b, c, d;
        a = b = c = d = 0;
        for(i = 1 ; i <= n; i++)
        {
            if(row[i])
                a++;
            else
                b++;
        }
        for(i = 1; i<= m; i++)
        {
            if(col[i])
                c++;
            else
                d++;
        }
        long long int ans = a*d + b*c;
        cout << (ans) << endl;
    }
}
