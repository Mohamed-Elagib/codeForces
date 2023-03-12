#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> s;
    int a;
    for(int i = 0; i < 4; i++)
    {
        cin >> a;
        s.push_back(a);
    }
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());

    cout << 4 - s.size();



    return 0;
}
