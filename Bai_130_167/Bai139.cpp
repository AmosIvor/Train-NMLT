#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a == 0)
    {
        if (b == 0)
            cout << "VSN";
        else
            cout << "Rong";
    }
    else
    {
        float x = (float)-b / a;
        cout << x;
    }
    return 0;
}