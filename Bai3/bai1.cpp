#include<bits\stdc++.h>
using namespace std;
long GT(int n)
{
    long T = 1;
    for (int i = 1; i <= n; i++)
        T = T * i;
    return T;
}
int main()
{
    int n;
    cout << "n=";
    cin >> n;
    float S = (float)(GT(n) + 1) / GT(n + 1);
    cout << "S= " << S;
    return 0;
}