#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool pythagorean(int x, int y, int a[], int n)
{
    for(int i = 0; i < n-2; i++)
    {
        for(int j = i + 1; j < n - 1; j++)
        {
            for(int k = j + 1; k < n; k++)
            {
                int temp1, temp2, temp3;
                temp1 = a[k];
                temp2 = a[i];
                temp3 = a[j];
                if(temp1^2 == temp2^2 + temp3^2)
                    return true;
                else if(temp1^2 <= temp2^2 + temp3^2)
                    break;
            }
        }
    }
    return false;
}
int main() {
	int t, n;
	cin >> t;
	while(t--)
	{
	    cin >> n;
	    int a[n];
	    for(int i = 0; i < n; i++)
	        cin >> a[i];

	    if(pythagorean(0, 1, a, n))
	        cout << "Yes\n";
	    else
	        cout << "No\n";
	}
	return 0;
}
