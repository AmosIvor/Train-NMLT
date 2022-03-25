#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int t = n;
    bool flag = true;
    int digit = t % 10;
    while (t != 0)
    {
        int dv = t % 10;
        if (dv > digit)
            flag = false;
        digit = dv;
        t = t / 10;
    }
    if (flag == true)
        cout << "La dang";
    else
        cout << "Khong la";
    return 0;
}