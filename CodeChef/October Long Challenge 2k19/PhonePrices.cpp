#include<bits/stdc++.h>
using namespace std;
const int N = 101;
int arr[110];
int goodpricecount(int n)
{
    int k = 0;
    deque<int> d;
    int i;
    for(i = 0; i < n; i++)
    {

            if(!d.empty()){
                while(d.front() < i - 5)
                    d.pop_front();
                if(!d.empty())
                {
                     while(arr[d.front()] > arr[i])
                        d.pop_front();
                }
                d.push_back(i);
                if(d.front() == i)
                    k++;
            }
            else
            {
                d.push_back(i);
                k++;
            }

    }
    return k;
}
int main()
{
    int t;
    int n;
    int flag;
    cin >> t;
    if(t > 100)
        return 0;
    while(t--)
    {
        flag = 0;
        cin >> n;
        if(n < 7 || n > 100)
            continue;
        int temp, i;
        for(i = 0; i<n; i++)
        {
            cin >> temp;

            if(temp <= 750 && temp >= 350)
                arr[i] = temp;
            else
                flag = 1;
        }
            if(!flag)
                cout << goodpricecount(n) << endl;
    }

}
