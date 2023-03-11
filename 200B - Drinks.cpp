#include <bits/stdc++.h>
using namespace std;


int main()
{
    cout.unsetf ( std::ios::floatfield );
    cout.precision(8);
    int n, a; double result = 0;

    cin >> n;
    int x = n;
    while(n--)
    {
        cin >> a;
        result += a;
    }
    cout << result / x;


    return 0;
}
