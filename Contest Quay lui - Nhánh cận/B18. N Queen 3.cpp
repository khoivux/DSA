#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n;
int a[199] = {0}; // Col
int Xuoi[199] = {0}; // i - j + n
int Nguoc[199] = {0}; // i + j - 1
int cnt = 0;
int x[199][1999] = {0};
void solve()
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n;S j++)
        {
            if(x[i][j]) cout << "Q";
            else cout << ".";
        }
        cout << endl;
    }
    cout << endl;
}
void Try(int i)
{
   for(int j = 1; j <= n; j++)
   {
       if(!a[j] && !Xuoi[i - j + n] && !Nguoc[i + j - 1])
       {
            x[i][j] = 1;
            a[j] = 1;
            Xuoi[i - j + n] = 1;
            Nguoc[i + j - 1] = 1;
            if(i == n) solve();
            else Try(i + 1);
            x[i][j] = 0;
            a[j] = 0;
            Xuoi[i - j + n] = 0;
            Nguoc[i + j - 1] = 0;
       }
   }
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n; 
    Try(1);   
}