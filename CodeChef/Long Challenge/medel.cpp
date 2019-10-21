#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        int k, j;
        k = j = 0;
        for(int i =1; i < n; i++)
        {
            if(a[i] < a[k])
                k = i;
            else if(a[i] > a[j])
                j = i;
        }
        if(k < j)
            cout << a[k] << " " << a[j] << endl;
        else
            cout << a[j] << " " << a[k] << endl;
    }
}
