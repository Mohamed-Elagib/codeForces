#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, result;
    cin >> t;
    while(t--)
    {
        result = 0;
        cin >> a;
        cin >> b;
        if(a % b == 0) result = 0;
        else result = ((a / b) + 1) * b - a;
        cout << result << "\n";
    }



    return 0;
}
