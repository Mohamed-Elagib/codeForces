#include <iostream>
using namespace std;

int main()
{
    int N, x = 0;
    cin >> N;
    while(N--)
    {
        string s;
        cin >> s;
        if(s[0] == '+' || s[1] == '+')
            x++;
        else
            x--;
    }
    cout << x;
}
