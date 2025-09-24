#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int x;
        cin >> x;
        long long fact = 1;
        for (int j = 2; j <= x; j++)
        {
            fact *= j; 
        }

        cout << fact << endl;
    }
    return 0;
}