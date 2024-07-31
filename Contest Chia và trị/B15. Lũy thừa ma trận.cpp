#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n, k;
const int mod = 1e9 + 7;
struct Matrix
{ 
    ll f[20][20];
};
Matrix operator * (Matrix a, Matrix b)
{
    Matrix res;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            res.f[i][j] = 0;
            for(int k = 0; k < n; k++)
            {
                res.f[i][j] += (a.f[i][k] * b.f[k][j]) % mod;
                res.f[i][j] %= mod;
            } 
        }
    }
    return res;
}

Matrix powMod(Matrix a, int b)
{
    if(b == 1) return a;
    Matrix x = powMod(a, b / 2);
    if(b % 2 == 0) return x * x;
    else return a * x * x;
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n >> k;
    Matrix a;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a.f[i][j];
        }
    }
    Matrix res = powMod(a, k);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << res.f[i][j] << " ";
        }
        cout << endl;
    }
}