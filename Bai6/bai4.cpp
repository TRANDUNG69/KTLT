#include <bits\stdc++.h>
using namespace std;
bool OK(char *S)
{
    int d1 = 0, d2 = 0;
    for (int i = 0; i < strlen(S); i++)
    {
        if (S[i] =='(' )d1++;
            if (S[i] ==')' )
            d2++;
        if (d1 < d2)
            return false;
    }
    if (d1 != d2)
        return false;
    return true;
}
int main()
{
    char *S;
    S = new char[50];
    int d1 = 0, d2 = 0;
    cout <<"S =";
    gets(S);
    if (OK(S))
        cout <<"Hop le";
    else
        cout <<"Khong hop le";
    return 0;
}