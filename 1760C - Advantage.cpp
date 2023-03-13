#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, n, max1 = INT_MIN, maximum = INT_MIN;
    cin >> t;

    while(t--)
    {
        vector<int> v;
        cin >> n;
        while(n--)
        {

            cin >> a;
            v.push_back(a);
            if(a >= maximum)
            {
                max1 = maximum;
                maximum = a;
            }
            else if(a > max1)
            {
                max1 = a;
            }
        }
        for(unsigned int i = 0; i < v.size(); i++)
        {
            if(v[i] >= maximum)
                v[i] -= max1;
            else
                v[i] -= maximum;
            cout << v[i] << " ";
            v[i] = 0;
        }
        cout << "\n";
        maximum = max1 = 0;

    }

    return 0;
}
