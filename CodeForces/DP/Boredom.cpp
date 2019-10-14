#include<iostream>
using namespace std;
int getMax(int i, int n, int arr[], int saf[])
{

    if(i >= n)
        return 0;
    if(saf[i]!= 0)
        return saf[i];
    int k, l;
    k = arr[i] + getMax(i+2, n, arr, saf);
    l = getMax(i+1, n, arr, saf);
    if(k > l)
        saf[i] = k;
    else
        saf[i] = l;
    return saf[i];
}
int main()
{
    int n; //size
    cin >> n;
    int arr[n];
    int saf[n] = {};
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << getMax(0, n, arr, saf);
}
