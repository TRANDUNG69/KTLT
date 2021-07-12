#include <bits\stdc++.h>
using namespace std;
int SCCT(char *S)
{
    int d = 0;
    for (int i = 0; i < strlen(S); i++)
        if (S[i] >= 97 && S[i] <= 122)
            d++;
    return d;
}
void xoa(char S[])
{
    for (int i = 0; i < strlen(S); i++)
    while (S[i] == 'a' || S[i] =='A')
        for (int j = i; j < strlen(S); j++)
            S[j] = S[j + 1];
}
int main()
{
    char S[50];
    cout <<"S =";
    gets(S);
    cout <<"Xâu có " << SCCT(S) <<" chữ thường";
    xoa(S);
    cout <<" Xâu sau khi xóa :"<< S;
    return 0;
}