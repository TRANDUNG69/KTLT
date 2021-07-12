#include <bits\stdc++.h>
using namespace std;
int main()
{
    float x;
    cout <<" x =";
    cin >> x;
    float F = (x * x + exp(fabs(x)) + sin(x) * sin(x)) / pow(x * x + 1, 0.2);
    cout <<"F = "<< F;
    return 0;
}