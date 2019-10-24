#include<bits/stdc++.h>
using namespace std;
char s[1000100];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> s;
        queue <int> even;
        queue <int> odd;
        int count = 0;
        while(s[count] !='\0')
        {
            int a =  s[count] - '0';

            if(a%2)
            {
                odd.push(a);
                if(odd.front() == a)
                {
                    while(!(even.empty()) && !(odd.empty()))
                    {
                        if(odd.front() < even.front())
                        {
                            cout << odd.front();
                            odd.pop();
                        } else
                        {
                            cout << even.front();
                            even.pop();
                        }
                    }
                }
            }
            else
            {
                even.push(a);
                if(even.front() == a)
                {
                    while(!(odd.empty()) && !(even.empty()))
                    {
                        if(even.front() < odd.front())
                        {
                            cout << even.front();
                            even.pop();
                        } else
                        {
                            cout << odd.front();
                            odd.pop();
                        }
                    }
                }
            }
            count++;
        }
        while(!(odd.empty()))
        {
            cout << odd.front();
            odd.pop();
        }
        while(!(even.empty()))
        {
            cout << even.front();
            even.pop();
        }
        cout << endl;
    }
}
