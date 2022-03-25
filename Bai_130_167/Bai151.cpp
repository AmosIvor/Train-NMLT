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
        int dv = t % 2;
        if (dv == 1)
            flag = 0;
        t = t / 2;
    }
    if (flag == 1)
        cout << "La dang";
    else
        cout << "khong la";
    return 0;
}