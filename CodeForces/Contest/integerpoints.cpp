#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        long long temp;
        long long o1 = 0;
        long long e1 = 0;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            if(temp%2)
                o1++;
            else
                e1++;
        }
        int m;
        cin >> m;
        long long o2 = 0;
        long long e2 = 0;
        for(int i = 0 ; i < m; i++)
        {
            cin >> temp;
            if(temp%2)
                o2++;
            else
                e2++;
        }
        temp = o2*o1 + e1*e2;
        cout << temp << endl;

    }
}
