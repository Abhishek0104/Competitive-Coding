#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if(a == 0)
        return b;
    else
        return gcd(b%a, a);
}
int main()
{
    int a, b;
    cin >> a >> b;
    int g;
    if(a > b)
    {
        g = a;
        a = b;
        b = g;
    }
    int n = b - a;
    int x[n];
    x[0] = a*b/gcd(a, b);
    int min = 0;
    for(int i = 1; i < n; i++)
    {
        a++;
        b++;
        x[i] = a*b/gcd(a, b);
        if(x[i] < x[min])
            min = i;
    }
    cout << min;

}
