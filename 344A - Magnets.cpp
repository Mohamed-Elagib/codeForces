#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, result = 0;
    cin >> n;
    vector <int> v;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }

    for(unsigned int i = 0; i < v.size(); i++)
    {
        if(v[i] != v[i + 1])
            result++;
    }
    cout << result;


    return 0;
}
