#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int64_t>> bi(60, vector<int64_t>(60));
    bi[0][0] = 1;
    for(int i = 1; i < 60; i++ )
    {
        bi[i][0] = 1;
        for(int j = 1; j < 60; j++)
            bi[i][j] = bi[i-1][j-1] + bi[i-1][j];
    }
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n;
        cin >> k;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a+n);
        int in = 0;
        int c = 0;
        int x = a[k-1];
        for(int i = 0;  i < n ; i++)
        {
            if(a[i] == x)
            {
                if(i < k)
                    in++;
                c++;
            }
        }
        cout << bi[c][in] << endl;
    }
}
