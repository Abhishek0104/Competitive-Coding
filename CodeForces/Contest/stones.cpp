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
        int sum = 0;
        while(c>=2 && b!= 0)
        {
            sum += 3;
            c -= 2;
            b--;
        }
        while(b>=2 && a != 0)
        {
            sum += 3;
            b -= 2;
            a--;
        }
        cout << sum << endl;
    }
}
