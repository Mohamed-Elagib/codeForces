#include <iostream>

using namespace std;

int main()
{
    int X[5][5];
    int x, y;
    for(int i = 0; i < 5; i++)
    {
        cin >> X[i][0] >> X[i][1] >> X[i][2] >> X[i][3] >> X[i][4];
        if(X[i][0] == 1)
        {
            x = i + 1;
            y = 1;
        }
        else if(X[i][1] == 1)
        {
            x = i + 1;
            y = 2;
        }
        else if(X[i][2] == 1)
        {
            x = i + 1;
            y = 3;
        }
        else if(X[i][3] == 1)
        {
            x = i + 1;
            y = 4;
        }
        else if(X[i][4] == 1)
        {
            x = i + 1;
            y = 5;
        }

    }
    cout << (abs(y - 3) + abs(x - 3));

}
