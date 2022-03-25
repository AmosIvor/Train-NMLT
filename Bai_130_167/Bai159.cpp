#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int t = n;
    int cnt = 0;
    int minDigit = 10;
    while (t != 0)
    {
        int dv = t % 10;
        if (dv < minDigit)
            minDigit = dv;
        t = t / 10;
    }
    int tmp = n;
    while (tmp != 0)
    {
        int dv = tmp % 10;
        if (dv == minDigit)
            cnt = cnt + 1;
        tmp = tmp / 10;
    }
    cout << cnt;
    return 0;
}