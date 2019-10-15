#include<bits/stdc++.h>
using namespace std;
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
        for(int  i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a+n);
        int sum = 0, co = 0;
        for(int i = 0; i < k; i++)
            sum += a[i];
        co++;
        for(int i = 1; i <= n - k; i++)
        {
            int temp = 0;
            for(int j = i; j < i + k; j++)
            {
                temp += a[j];
            }
            if(temp == sum)
                co++;
            else
                break;
        }
        cout << co << endl;
    }
}
