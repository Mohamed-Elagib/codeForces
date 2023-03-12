#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    if(s[1] == '}')
        cout << 0;
    else
    {
    vector<char> v;
    for(int i = 1; i < s.size(); i += 3)
        v.push_back(s[i]);

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    cout << v.size();
    }
    return 0;
}
