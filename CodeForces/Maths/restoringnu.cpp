#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a[4];
  for(int i = 0; i < 4; i++)
    cin >> a[i];
  sort(a, a+4);
  int x, y, z;
  /*x + y = a[0];
    x + z = a[1];
    y + z = a[2];
    x + y + z = a[3];*/
  x = a[3] - a[2];
  y = a[0] - x;
  z = a[2] - y;
  cout << x <<" "<< y << " " << z;
}
