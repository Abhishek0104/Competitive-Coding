#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, arr+n);
    int width, height;
    width = height = 0;
    for(i = 0; i < n/2; i++)
        width += arr[i];
    for(; i < n; i++)
        height += arr[i];

    long long temp;
    temp = (long long)width*width + (long long)height*height;
    cout << temp;
}
