#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned int n;
    int maximum = 0, current = 0;
    cin >> n;
    while(n--)
    {
        int a, b;
        cin >> a >> b;
        current = current - a + b;
        if(current > maximum) maximum = current;
    }
    cout << maximum;
}
