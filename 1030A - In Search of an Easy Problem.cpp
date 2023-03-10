#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, result = 0;
    cin >> n;
    while(n--)
    {
        cin >> a;
        result += a;
        if(a == 1)break;
    }
    if(result > 0)cout << "HARD";
    else cout << "EASY";
    return 0;
}
