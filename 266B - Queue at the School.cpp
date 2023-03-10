#include <iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    char temp;
    while(t--)
    {
        for(unsigned int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'B' && s[i + 1] == 'B')
            {
                continue;
            }
            if(s[i] == 'B' && i + 1 < s.size())
            {
                temp = s[i + 1];
                s[i + 1] = 'B';
                s[i] = temp;
                ++i;
            }
        }
    }
    cout << s;

    return 0;
}
