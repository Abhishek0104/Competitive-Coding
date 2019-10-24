#include<bits/stdc++.h>
using namespace std;
char s[550];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> s;
        int i = 0;
        int a[26];
        for(i = 0; i < 26; i++)
            a[i] = 0;

        i = 0;
        while(s[i]!='\0')
        {
            if(s[i] == s[i+1])
                i++;
            else
                a[s[i]-'a'] = 1;
            i++;
        }
        for(i = 0; i < 26; i++)
        {
            if(a[i]%2)
                putchar('a' + i);
        }
        putchar('\n');
    }
}
