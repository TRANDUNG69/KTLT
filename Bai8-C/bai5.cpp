#include <bits\stdc++.h>
using namespace std;
void CreateFile(char *filename, int n)
{
    ofstream f(filename, ios::out);
    f << n << endl;
    for (int i = 0; i < n; i++)
        f << rand() % 100 << " ";
}
void ReadFile(char *filename, int *&a, int &n)
{
    ifstream f(filename, ios::in);
    char Buff[255];
    f >> Buff;
    n = atoi(Buff);
    a = new int[n];
    for (int i = 0; i < n; i++)
        if (!f.eof())
        {
            f >> Buff;
            a[i] = atoi(Buff);
        }
    f.close();
}
void Sort(int *a, int n)
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
            {
                int tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
}
void WriteFile(char *filename, int *a, int n)
{
    ofstream f(filename, ios::out);
    f << n << endl;
    for (int i = 0; i < n; i++)
        f << a[i] << " ";
    f.close();
}
int main()
{
    CreateFile("FILE.txt", 10);
    int *a;
    int n;
    ReadFile("FILE.txt", a, n);
    Sort(a, n);
    WriteFile("SORTED_FILE.txt", a, n);
    cout << "Ket thuc! hay kiem tra file SORTED_FILE.txt";
    return 0;
}