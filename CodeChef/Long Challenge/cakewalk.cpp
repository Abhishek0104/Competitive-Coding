#include<bits/stdc++.h>
using namespace std;
int flag = 0;
void div(long long n);
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;

        div(n);
        if(flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

    }
}
void div(long long n)
{
    if(n == 1)
    {
        flag = 1;
    }
    else
    {
        if(n%10 == 0)
            div(n/10);
        if(n%20 == 0)
            div(n/20);
    }
}
