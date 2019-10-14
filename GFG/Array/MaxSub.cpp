#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void MaxSA(int a[], int k)
{
    deque<int> d;
    for(int i = 0; i < k; i++)
    {
        while((!d.empty()) && a[d.front()] < a[i])
            d.pop_front();
        d.push_back(i);

    }
    cout << a[d.front()] << " ";
}
int main() {
	int t, n, k;
	cin >> t;
	while(t--)
	{
	    cin >> n;
	    cin >> k;
	    int a[n];
	    for(int i = 0; i < n; i++)
	        cin >> a[i];

	    MaxSA(a, k);
	    cout << endl;
	}
	return 0;
}
