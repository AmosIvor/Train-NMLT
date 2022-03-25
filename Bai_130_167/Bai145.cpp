#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == sqrt(n) * sqrt(n))
        cout << "La So Chinh Phuong";
    else
        cout << "Khong la";
    return 0;
}