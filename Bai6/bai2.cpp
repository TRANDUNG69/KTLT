#include <bits\stdc++.h>
using namespace std;
bool KT(char *S)
{
    int d = 0;
    for (int i = 0; i < strlen(S) - 1; i++)
        if (S[i] == ' ' && S[i + 1] == ' ')
            d++;
    int SoTu = 0;
    for (int i = 0; i < strlen(S) - 1; i++)
        if (S[i] == ' ' && S[i + 1] != ' ')
            SoTu++;
    if (S[0] != ' ')
        SoTu++;
    return (d == 0 && SoTu <= 10);
}
int main()
{
    char S[50];
    cout <<"S =";
    gets(S);
    if (KT(S))
        cout <<"Xâu hợp lệ";
    else
        cout <<"Xâu không hợp lệ";
    return 0;
}
