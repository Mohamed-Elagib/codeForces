#include<iostream>

int main()
{
    short k, n, result = 0;
    short num;
    std::cin >> n >> k;
    n -= k;
    while(k--)
    {
        std::cin >> num;
        if(num)result++;
    }
    while(n--)
    {
        short x;
        std::cin >> x;
        if(x == num && x) result++;
    }
    std::cout << result << "\n";
}
