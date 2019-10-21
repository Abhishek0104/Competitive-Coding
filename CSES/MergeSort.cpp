#include<bits/stdc++.h>
using namespace std;
int arr[1000];
int n;
void merge(int a, int b);
void mergesort(int a, int m, int b);
int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    merge(0, n-1);
    for(int i = 0; i < n; i++)
        cout << arr[i] <<" ";
}
void merge(int a, int b)
{
    if(a<b)
    {
        int m = (a+b)/2;
        merge(a, m);
        merge(m+1, b);
        mergesort(a, m, b);
    }
}
void mergesort(int a, int m, int b)
{
    int x = m - a + 1;
    int y = b - m;
    int p[x];
    int q[y];
    for(int i = 0; i < x; i++ )
        p[i] = arr[a+i];
    for(int i = 0; i < y; i++)
        q[i] = arr[m+1+i];
    int in = a;
    int in1, in2;
    in1 = in2 = 0;
    while (in1 < x && in2 < y)
    {
        if(p[in1] < q[in2])
            arr[in] = p[in1++];
        else
            arr[in] = q[in2++];
        in++;
    }
    while(in1 < x)
        arr[in++] = p[in1++];

    while(in2 < y)
        arr[in++] = q[in2++];
}
