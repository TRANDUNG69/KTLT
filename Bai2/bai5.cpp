#include <bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    float T;
    cout << "n=";
    cin >> n;
    if (n <= 100)
        T = n * 750;
    else if (n <= 200)
        T = 100 * 750 + (n - 100) * 1250;
    else if (n <= 300)
        T = 100 * 750 + 100 * 1250 + (n - 200) * 1750;
    else
        T = 100 * 750 + 100 * 1250 + 100 * 1750 + (n - 300) * 3000;
    cout <<"T ="<< T;
    return 0;
}