#include <bits\stdc++.h>
using namespace std;
int main()
{
    float x;
    int n;
    float S;
    cout << "x =";
    cin >> x;
    cout << "n =";
    cin >> n;
    if (n % 2 == 0)
    {
        S = 2016 * x;
        float TS = x, MS = 1;
        for (int i = 1; i < n; i++)
        {
            TS = TS * x;
            MS = MS * 3;
            S = S + TS / MS;
        }
    }
    else
        S = 0;
    cout << "S =" << S;
    return 0;
}