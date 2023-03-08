#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int lower = 0, upper = 0;
    for(unsigned int i = 0 ;i < s.size(); i++)
    {
        if(islower(s[i])) lower++;
        if(isupper(s[i])) upper++;
    }
    if(upper > lower)
        for(unsigned int i = 0; i < s.size(); i++)
            s[i] = toupper(s[i]);
    else
        for(unsigned int i = 0; i < s.size(); i++)
            s[i] = tolower(s[i]);
    cout << s;
}
