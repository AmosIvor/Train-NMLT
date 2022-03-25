#include <iostream>
using namespace std;
int main()
{
    int n;
    int flag = 0;
    int t = n;
    while (t != 0)
    {
        int dv = t % 10;
        if (dv % 2 == 1)
            flag = 1;
        t = t / 10;
    }
    if (flag)
        cout << "Le";
    else
        cout << "Khong la Le";
    return 0;
}