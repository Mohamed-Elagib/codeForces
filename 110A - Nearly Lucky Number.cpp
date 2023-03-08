#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long n;
    unsigned int result = 0;
    cin >> n;
    while(n)
    {
        if((n % 10) == 4 || (n % 10) == 7) result++;
        n /= 10;
    }
    if(result == 7 || result == 4) cout << "YES";
    else cout << "NO";
}
