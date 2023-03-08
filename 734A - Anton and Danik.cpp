#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned int n, a = 0, d = 0;
    cin >> n;
    string s;
    cin >> s;
    for(unsigned int i = 0 ; i < s.size(); i++)
    {
        if(s[i] == 'A')
            a++;
        if(s[i] == 'D')
            d++;
    }
    if(a > d) cout << "Anton";
    else if(a < d) cout << "Danik";
    else cout << "Friendship";
}
