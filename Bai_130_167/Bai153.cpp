#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int flag = 1;
    int t = n;
    while (t > 1)
    {
        int dv = t % 5;
        if (dv != 0)
            flag = 0;
        t = t / 5;
    }
    if (flag == 1)
        cout << "La dang";
    else
        cout << "khong la";
    return 0;
}