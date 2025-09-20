#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    int Ldiagonal = 0, Rdiagonal = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
        Ldiagonal += arr[i][i];
        Rdiagonal += arr[i][n - i - 1];
    }
    int difference = abs(Ldiagonal - Rdiagonal);
    cout << difference;
}