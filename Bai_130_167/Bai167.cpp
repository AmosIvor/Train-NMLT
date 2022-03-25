#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s = 0;
    int i = 1;
    while (s < n)
    {
        s = s + i;
        i = i + 1;
    }
    cout << i - 2;
    return 0;
}