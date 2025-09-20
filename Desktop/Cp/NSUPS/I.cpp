#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *candles = new int[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> candles[i];
    }
    int maxHeight = 0;
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        int height = candles[i];
        if (height > maxHeight)
        {
            maxHeight = height; 
            count = 1;          
        }
       
        else if (height == maxHeight)
        {
            count++; 
        }
    }

   
    cout << count << endl;


    return 0;
}