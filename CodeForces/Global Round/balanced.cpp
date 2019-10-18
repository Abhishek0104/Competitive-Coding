#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int flag = 0;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
    {
        if(a[i]%2 == 0)
            cout << a[i]/2 << endl;
        else
        {
            if(flag == 0)
            {
                cout << a[i]/2 << endl;
                flag = 1;
            } else
            {
                int temp = (a[i]<0)? (a[i]/2 - 1) : (a[i]/2 + 1);
                cout << temp << endl;
                flag = 0;
            }
        }
    }
}
