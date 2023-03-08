#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, n, w, result = 0;
    cin >> k >> n >> w;
    while(w--)
    {
        result += (w + 1) * k;
    }
    if(result - n > 0)
        cout << result - n;
    else
        cout << 0;
}
