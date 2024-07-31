#include <bits/stdc++.h>
#define ll long long

using namespace std;
int f[93];
int n, k;
void makeFibo()
{
    f[1] = 1; f[2] = 1;
    for(int i = 3; i < 93; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
}
int findBit(int n, int k)
{
    if(n == 1) return 0;
    if(n == 2) return 1;

    if(k > f[n - 2]) 
        return findBit(n - 1, k - f[n - 2]);
    else return findBit(n - 2, k);
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    makeFibo();
    cin >> n >> k;
    cout << findBit(n, k);
}