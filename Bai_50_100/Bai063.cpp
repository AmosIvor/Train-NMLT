#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int t = 1;
    int tmp = n;
    int dv;
    while (tmp != 0)
    {
        dv = tmp % 10;
        if (dv % 2 == 1)
            t = t * dv;
        tmp = tmp / 10;
    }
    cout << t;
    return 0;
}