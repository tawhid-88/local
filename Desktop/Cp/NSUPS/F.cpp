#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    float positive = 0.000000, negative = 0.000000, zero = 0.000000;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i]>0)
        {
            positive++;
        }
        else if(arr[i]<0)
        {
            negative++;
        }
        else if(arr[i]==0)
        {
            zero++;
        }
    }
    cout << fixed << setprecision(6);
    cout <<  positive / n<<endl;
    cout << negative / n << endl;
    cout << zero / n << endl;
}