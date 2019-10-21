#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> vi;
void searchi(bool a[]);
int main()
{
    cin >>  n;
    bool a[n+1];
    searchi(a);
}
void searchi(bool a[])
{
    if(vi.size() == n){
        cout << "(";
        for(auto i = vi.begin(); i != vi.end(); i++)
            cout << *i << " ";
        cout << ")" << endl;
    }
    else
    {
        for(int i = 1; i <= n; i++ ){
            if(a[i])continue;
            a[i] = true;
            vi.push_back(i);
            searchi(a);
            vi.pop_back();
            a[i] = false;
        }
    }
}
