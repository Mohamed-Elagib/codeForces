#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2, result;
    cin >> s1;
    cin >> s2;
    for(unsigned int i = 0; i < s1.size(); i++)
    {
        if(s1[i] == s2[i])
            result += "0";
        else
            result += "1";
    }
    cout << result << "\n";


    return 0;
}
