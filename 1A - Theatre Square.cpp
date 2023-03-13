#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a;
    cin >> n >> m >> a;
    long long result1 = 0, result2 = 0;
    result1 = ceil(n * 1.0 / a);
    result2 = ceil(m *1.0 / a);
    cout << result1 * result2;

    return 0;
}
