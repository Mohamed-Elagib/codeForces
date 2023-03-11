#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, q, counter = 0;
    cin >> n;
    while(n--)
    {
        cin >> p >> q;
        if(p + 2 <= q) counter++;
    }
    cout << counter;


    return 0;
}
