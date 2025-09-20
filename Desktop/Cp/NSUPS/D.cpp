#include <iostream>
using namespace std;

int main()
{
    int a[3], b[3];
    int point_a=0, point_b=0;
    for (int i = 0; i < 3;i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> b[i];
        if(a[i]>b[i])
        {
            point_a++;
        }
        else if(b[i]>a[i])
        {
            point_b++;
        }
        else if(a[i]==b[i])
        {
            continue;
        }
    }
    cout << point_a << " " << point_b;
}