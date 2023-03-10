#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin >> y;
    y++;
    string s = to_string(y);
    while(true)
    {
        if(s[0] != s[1] && s[0] != s[2] && s[0] != s[3] && s[1] != s[2] && s[1] != s[3] && s[2] != s[3])
            break;
        else
        {
            s = to_string(++y);
        }
    }
    cout << y;

    return 0;
}
