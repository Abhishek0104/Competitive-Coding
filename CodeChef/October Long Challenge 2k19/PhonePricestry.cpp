#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        int i;
        int k = 0;
        for(i = 0; i< n; i++)
            cin>>a[i];
        deque<int> d;
        for(i = 0; i < n; i++)
        {
            int temp = a[i];
            int in = i - 5;
            while((!d.empty()) && d.front() < in)
                d.pop_front();
            while((!d.empty()) && a[d.front()] > temp)
                d.pop_front();
            d.push_back(i);
            if(d.front() == i)
                k++;
        }
        cout << k << endl;
    }

}
