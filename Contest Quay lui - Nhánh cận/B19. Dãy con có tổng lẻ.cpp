#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n;
int x[199];
int a[199];
int sum = 0;
vector<string> v;
void Try(int i, int pos)
{
   for(int j = pos; j <= n; j++)
   {
        sum += x[j];
        a[i] = x[j];
        if(sum % 2)
        {
            string s = "";
            for(int k = 1; k <= i; k++) 
                s = s + char(a[k] + '0') + " ";
            v.push_back(s);
        }

        Try(i + 1, j + 1);
        sum -= x[j];
   }
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n; 
    for(int i = 1; i <= n; i++) cin >> x[i];
    Try(1, 1);
    sort(v.begin(), v.end());
    for(auto it : v) cout << it << endl;
}