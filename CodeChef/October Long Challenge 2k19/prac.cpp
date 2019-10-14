#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
        int arr[n];
        int mini, mini2, ans;
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        mini = 0;
        ans = 1;
        for(int i = 1; i<n; i++)
        {
            if(mini < i - 5)
            {
                mini = mini2;
                mini2 = i;
            }
            if(arr[i] < arr[mini])
            {
                mini = i;
                ans++;
                if(i+1 < n)
                    mini2 = i+1;
            } else if(arr[i] < arr[mini2])
            {
                mini2 = i;
            }
        }
        cout << ans;
}
