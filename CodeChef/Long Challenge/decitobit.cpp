#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    for(int i = 63; i >=1; i--)
    {
        if((n>>i)& 1)
            cout << "1";
        else
            cout << "0";
    }
}
