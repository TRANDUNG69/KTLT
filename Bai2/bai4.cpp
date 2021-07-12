#include <bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cout <<"n =";
    cin >> n;
    long T = 0;
    int S = 0;
    for (int i = 1; i <= n; i++)
        {
            bool passed = true;
            for (int j = 2; j < i; j++)
                if (i % j == 0)
                {
                    passed = false;
                    break;
                }
            if (passed)
            {
                T = T + i;
                S++;
            }
        }
    cout <<"Tong cac so nt = "<< T << endl;
    cout <<"So cac so nt = "<< S << endl;
    return 0;
}