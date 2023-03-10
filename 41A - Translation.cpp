#include <iostream>
using namespace std;

int main()
{
    string s, t, w;
    cin >> s;
    cin >> t;
    for(int i = s.size() - 1; i >= 0; i--)
        w += s[i];
        
    if(w == t)
        cout << "YES";
    else
        cout << "NO";
}
