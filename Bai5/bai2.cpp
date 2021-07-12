#include <bits\stdc++.h>
using namespace std;
int TC(int n, int m)
{
    int T = 0;
    for (int i = n; i <= m; i++)
        if (i % 2 == 0)
            T += i;
    return T;
}
float TB(int n, int m)
{
    int T = 0;
    int D = 0;
    for (int i = n; i <= m; i++)
        if (i % 3 == 0)
        {
            T = T + i;
            D++;
        }
    return (float)T / D;
}
int main()
{
    int n, m;
    cout <<"n =";
    cin >> n;
    cout <<"m =";
    cin >> m;
    cout <<"Tong chan = "<< TC(n, 2 * m) << endl;
    cout <<"Trung binh = "<< TB(n, n + m) << endl;
    return 0;
}