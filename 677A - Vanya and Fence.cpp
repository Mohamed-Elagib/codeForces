#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n, h, a, result = 0;
    cin >> n >> h;
    vector <int> v;
    while(n--)
    {cin >> a;
        v.push_back(a);}

        for(unsigned int i = 0; i < v.size(); i++)
        {
            if(v[i] > h) result += 2;
            else result++;
        }
        cout << result;

    return 0;
}
