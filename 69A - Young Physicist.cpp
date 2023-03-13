#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y, z, resultX = 0, resultY = 0, resultZ = 0;
    cin >> n;
    while(n--)
    {
        cin >> x >> y >> z;
        resultX += x;
        resultY += y;
        resultZ += z;
    }
    if(resultX != 0 || resultY != 0 || resultZ != 0) cout << "NO\n";
    else cout << "YES\n";

    return 0;
}
