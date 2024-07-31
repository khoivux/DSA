#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int mod = 1e9 + 7;
struct Matrix
{ 
    ll f[2][2];
};
Matrix operator * (Matrix a, Matrix b)
{
    Matrix res;
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            res.f[i][j] = 0;
            for(int k = 0; k < 2; k++)
            {
                res.f[i][j] += (a.f[i][k] * b.f[k][j]) % mod;
                res.f[i][j] %= mod;
            } 
        }
    }
    return res;
}

Matrix powMod(Matrix a, int n)
{
    if(n == 1) return a;
    Matrix x = powMod(a, n / 2);
    if(n % 2 == 0) return x * x;
    else return a * x * x;
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n; cin >> n;
    Matrix a;
    a.f[0][0] = a.f[1][0] = a.f[0][1] = 1;
    a.f[1][1] = 0;
    Matrix res = powMod(a, n);
    cout << res.f[0][1];
}