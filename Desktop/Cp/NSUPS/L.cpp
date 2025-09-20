#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s[n];
    int evCount = 0, oddCount = 0;
    int evIndex = 0, oddIndex = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];
        if(s[i]%2==0)
        {
            evCount++;
            evIndex = i;
        }
        else{
            oddCount++;
            oddIndex = i;
        }
    }

    if(evCount==1)
    {
        cout << evIndex;
    }
    else{
        cout << oddIndex;
    }
}