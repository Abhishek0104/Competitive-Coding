#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if((a + b*2 + c*3)%2==0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
