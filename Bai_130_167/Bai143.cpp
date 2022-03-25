#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int i = 0;
    while (i <= n)
    {
        if (n % i == 0)
            sum = sum + i;
        i = i + 1;
    }
    if (n == sum)
        cout << "Perfect Number";
    else
        cout << "Khong la";
    return 0;
}