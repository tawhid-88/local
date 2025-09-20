#include <iostream>
using namespace std;

int main()
{
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;

    bool meet = false;
    for (int i = 0; i < 10000; ++i)
    {
        if (x1 == x2)
        {
            meet = true;
            break;
        }
        x1 += v1;
        x2 += v2;
    }
    if (meet)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}