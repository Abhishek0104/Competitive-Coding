#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n;
    int k;
    cin >> k;
    cin >> n;
    if(k%5 == 0)
    {
        if(n - k - 0.5 >= 0)
            printf("%.2f", n - k - 0.5);
        else
            printf("%.2f", n);
    } else
        printf("%.2f", n);
}
