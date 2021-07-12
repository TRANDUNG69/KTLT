#include <bits\stdc++.h>
using namespace std;
void CREATE(char *filename)
{
    int B;
    int n, m;
    ofstream f(filename, ios::out);
    cout << "n=";
    cin >> n;
    f << n << endl;
    cout << "m=";
    cin >> m;
    f << m << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "a[" << i << "][" << j << "]=";
            cin >> B;
            f << B << " ";
        }
        f << endl;
    }
    f.close();
}
void READ(char *filename, int **&a, int &n, int &m)
{
    ifstream f(filename, ios::in);
    char S[255];
    f >> S;
    n = atoi(S);
    f >> S;
    m = atoi(S);
    a = new int *[n];
    for (int i = 0; i < n; i++)
        a[i] = new int[m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (!f.eof())
            {
                f >> S;
                a[i][j] = atoi(S);
            }
        }
    f.close();
}
void PRINT(int **a, int n, int m)
{
    cout << "n=" << n << endl;
    cout << "m=" << m << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
int main()
{
    int n, m;
    int **a;
    CREATE("MATRIX.txt");
    READ("MATRIX.txt", a, n, m);
    cout << "RESULT: " << endl;
    PRINT(a, n, m);
    return 0;
}