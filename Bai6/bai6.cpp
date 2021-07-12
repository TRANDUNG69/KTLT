#include <bits\stdc++.h>
using namespace std;
void xoa(int a[], int &n)
{
    for (int i = 0; i < n; i++)
        while (a[i] % 2 == 0)
        {
            for (int j = i; j < n; j++)
                a[j] = a[j + 1];
            n--;
            a = (int *)realloc(a, n * sizeof(float));
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
        cout <<"a["<< i <<"] =";
        cin >> a[i];
    }
    xoa(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] <<" ";
    delete (a);
    return 0;
}