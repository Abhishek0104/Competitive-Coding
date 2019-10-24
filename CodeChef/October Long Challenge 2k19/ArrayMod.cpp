#include<bits/stdc++.h>
using namespace std;


int n;
long long k;
int a[100200];

void do_it()
{
    cin >> n >> k;
    for(int  i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
    {
        int ans = 0, op = k/n + ((k%n) > i), j = n - i - 1;
        if(i < j)
        {
            switch (op % 3) {
              case 0: ans = a[i]; break;
              case 1: ans = a[i] ^ a[j]; break;
              case 2: ans = a[j]; break;
          }
      } else if (i > j)
      {
          switch (op % 3) {
              case 0: ans = a[i]; break;
              case 1: ans = a[j]; break;
              case 2: ans = a[i] ^ a[j]; break;
              }
      } else
      {
          if(k > i) ans = 0;
          else ans = a[i];
      }
      cout <<ans; putchar(' ');

    }
    putchar('\n');
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        do_it();
    return 0;
}
