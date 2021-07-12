#include <bits\stdc++.h>
using namespace std;
#define DG1 750
#define DG2 1250
#define DG3 1750
#define DG4 3000
int main()
{
    int n;
    float T;
    cout << "n=";
    cin >> n;
    if (n <= 100)
        T = n * DG1;
    else if (n <= 200)
        T = 100 * DG1 + (n - 100) * DG2;
    else if (n <= 300)
        T = 100 * (DG1 + DG2) + (n - 200) * DG3;
    else
        T = 100 * (DG1 + DG2 + DG3) + (n - 300) * DG4;
    cout <<"T ="<< T;
    return 0;
}