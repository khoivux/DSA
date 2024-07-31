#include <bits/stdc++.h>
#define ll long long

using namespace std;
ll gcd(ll a, ll b)
{
    if(b == 0) return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return a / gcd(a, b) * b;
}
struct PhanSo
{
    ll tu, mau;
    void rutGon()
    {
        ll uoc = gcd(this->tu, this->mau);
        this->tu /= uoc;
        this->mau /= uoc;
    }
};

PhanSo Hieu(PhanSo a, PhanSo b)
{
    ll mauchung = a.mau * b.mau;
    ll tu1 = a.tu * b.mau - b.tu * a.mau;
    PhanSo res{tu1, mauchung};
    res.rutGon();
    return res;
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    PhanSo a;
    cin >> a.tu >> a.mau;

    while(a.tu)
    {
        ll x;
        if(a.mau % a.tu == 0)   x = a.mau / a.tu;
        else x = a.mau / a.tu + 1;

        PhanSo donVi{1, x};
        cout << 1 << "/" << x;
        a = Hieu(a, donVi);
        if(a.tu) cout << " + ";
    }
}