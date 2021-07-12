#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cout <<" n =";
    cin >> n;
    int N = n / 1000;
    int T = (n % 1000) / 100;
    int C = (n % 100) / 10;
    int D = (n % 10);
    cout << N <<" nghin "<< T <<" tram "<< C <<" chuc "<< D <<" don vi " ;
    return 0;
}