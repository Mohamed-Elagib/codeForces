#include <bits/stdc++.h>
using namespace std;

int main()
{
    int total, a;
    vector <int> v;
    cin >> total;

    int p, q;
    cin >> p;
    while(p--)
    {
        cin >> a;
        v.push_back(a);
    }
    cin >> q;
    while(q--)
    {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    int sum1 = total * (total + 1) / 2;
    int sum2 = 0;
    for(int i = 0; i < v.size(); i++)
        sum2 += v[i];

    if(sum2 != sum1)
        cout << "Oh, my keyboard!";
    else
            cout << "I become the guy.";



    return 0;
}
