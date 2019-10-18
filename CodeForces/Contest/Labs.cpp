#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;


    int k ;
    for(int i = 0; i < n; i++)
    {

        for(int j = 0; j < n; j++)
        {
            k = (j + 1)*n;
            if(j%2 == 0)
            {
                cout << k - (n - i - 1) << " ";
            } else
            {
                cout << k - i << " ";
            }
        }
        cout << endl;
    }
}
