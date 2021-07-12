#include <bits\stdc++.h>
using namespace std;

void saochep(int a[], int &n)
{
    int m = n;
    for (int i = 0; i < m; i++)
        if (a[i] % 2 == 1)
        {
            a = (int *)realloc(a, (n + 1) * sizeof(float));
            a[n] = a[i];
            n++;
        }
}
int main()
{
    int *a;
    int n;
    cout <<"n =";
    cin >> n;
    a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout <<"a"<< i <<"] =";
        cin >> a[i];
    }
    saochep(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] <<" ";
    delete [] a;
    return 0;
}