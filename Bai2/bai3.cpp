#include <bits\stdc++.h>
using namespace std;
int main()
{

    float x;
    int n;
    cout <<"x =";
    cin >> x;
    cout <<"n =";
    cin >> n;
    float S;
    if (n % 2 == 1)
        S = 0;
    else
    {
        S = 2016 * x;
        for (int i = 2; i <= n; i++)
            S = S + pow(x, i) / pow(3, i - 1);
    }
    cout <<"S =" << S;
    return 0;
}