#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, a;
    cin >> t;
    string s;
    while(t--)
    {
        cin >> a;
        cin >> s;
        sort(s.begin(), s.end());
        s.erase(unique(s.begin(), s.end()), s.end());
        cout << a + s.size() << "\n";
    }

    return 0;
}
