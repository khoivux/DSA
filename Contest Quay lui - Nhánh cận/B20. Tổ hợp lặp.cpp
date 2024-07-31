#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n, k;
string s;
int a[199];

void Try(int i, int pos)
{
   for(int j = pos; j <= n; j++)
   {
        a[i] = j;
        if(i == k)
        {
            for(int l = 1; l <= k; l++) cout << s[a[l] - 1];
                cout << endl;
        }
        else Try(i + 1, j);
   }
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> k; 
    cin >> s;
    sort(s.begin(), s.end());
    Try(1, 1);
}