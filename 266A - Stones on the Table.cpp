#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, result = 0;
    cin >> n;
    string s;
    cin >> s;
    for(unsigned int i = 1; i < s.size(); i++)
    {
        if(s[i] == s[i - 1])
            result++;
    }
    cout << result;
}
