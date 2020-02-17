#include "iostream"
#include "vector"
using namespace std;
int main()
{
    vector<int> vec;
    int len, i, j;
    cout << "Enter the length of the array.\n";
    cin >> len;
    for( i = 0; i < len; i++)
    {
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }
    for(i = 1; i < len; i++)
    {
        int mi = vec[i];
        j = i - 1;
        while(j >= 0 && vec[j] > mi)
        {
            vec[j+1] = vec[j];
            j--;
        }
        vec[j+1] = mi;
    }
    cout << "Answer\n";
    for( i = 0; i < len; i++)
    {
        cout << vec[i] << " ";
    }
}
