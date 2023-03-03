#include<iostream>

int main()
{
    int n;
    std::cin >> n;
    int result = 0;
    while(n--)
    {
        int a, b, c;
        std::cin >> a >> b >> c;
        if((a + b + c) > 1) result++;
    }
    std::cout << result << "\n";
    
}
