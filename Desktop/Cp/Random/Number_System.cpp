#include<iostream>
using namespace std;

void start(){
    cout << "Choose any one:" << endl;
    cout << "Press 1 for Decimal to Binary." << endl;
    cout << "Press 2 for Binary to Decimal." << endl;
}
string DetoBi(int x)
{

}


int main()
{   
    start();
    int n;
    cin >> n;
    if(n==1)
    {
        int decimal;
        cin >> decimal;
        DetoBi(decimal);
    }
    return 0;
}