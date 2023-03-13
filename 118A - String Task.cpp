#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string result;
    cin >> s;
    for(unsigned int i = 0; i < s.size(); i++)
    {
        if(tolower(s[i]) == 'a' || tolower(s[i]) == 'e' || tolower(s[i]) == 'i' || tolower(s[i]) == 'o' || tolower(s[i]) == 'u' || tolower(s[i]) == 'y')
            continue;
        else
            {result += '.';
            result += tolower(s[i]);}
    }
    cout << result << "\n";

    return 0;
}
