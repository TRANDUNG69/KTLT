#include <bits\stdc++.h>
using namespace std;
void chen(char *S, int K, char C)
{
    if (K < 0 || K > strlen(S))
        cout <<"Vị trí không hợp lệ";
    else
    {
        for (int i = strlen(S); i >= K; i--)
            S[i + 1] = S[i];

        S[K] = C;
    }
}
int main()
{
    char S[80];
    char C;
    int K;
    cout <<"S =";
    gets(S);
    cout <<"C =";
    cin >> C;
    cout <<"K =";
    cin >> K;
    chen(S, K, C);
    cout <<"Xâu cuối cùng :"<< S;
    return 0;
}