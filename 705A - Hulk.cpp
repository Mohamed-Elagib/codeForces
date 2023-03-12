#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string result;
    int sign = -1;
    while(n--)
    {
        if(sign == -1)
            result += "I hate ";
        else
            result += "I love ";
        sign *= -1;
        if(n - 1 >= 0)
            result += "that ";
    }
    result += "it";
    cout << result;



    return 0;
}
