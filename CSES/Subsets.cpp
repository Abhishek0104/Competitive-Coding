#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> vi;
void subset(int k);
int main()
{
    cin >>  n;
    subset(1);
}
void subset(int k)
{
    if(k == n+1){
        cout << "{";
        for(auto i = vi.begin(); i != vi.end(); i++)
            cout << *i << " ";
        cout << "}" << endl;
    }
    else
    {
        vi.push_back(k);
        subset(k+1);
        vi.pop_back();
        subset(k+1);
    }
}
