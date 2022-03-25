#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int t = n;
    while (t >= 10)
        t = t / 10;
    cout << t;
    return 0;
}