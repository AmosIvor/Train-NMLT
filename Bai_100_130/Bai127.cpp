#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int min = a;
    if (b < min)
        min = b;
    cout << min;
    return 0;
}