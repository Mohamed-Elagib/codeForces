#include <iostream>

using namespace std;

int main()
{
    string s, result;
    cin >> s;
    int ones = 0, twos = 0, threes = 0;
    for(int i = 0; i < s.size(); i += 2)
    {
        if(s[i] == '1') ones++;
        else if(s[i] == '2') twos++;
        else if (s[i] == '3') threes++;
    }
    for(int i = 0; i < ones; i++)
        result = result + "1" + "+";

    for(int i = 0; i < twos; i++)
        result = result + "2" + "+";

    for(int i = 0; i < threes; i++)
        result = result + "3" + "+";

    result.pop_back();
    cout << result;
}

