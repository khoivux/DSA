#include <bits/stdc++.h>
#define ll long long

using namespace std;
string s[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
string a;
int n;
int x[999]; // Lưu các số được bấm 
string res = "";

void Try(int i) //s[pos]
{
    int pos = x[i];
    for(int j = 0; j < s[pos].length(); j++)
    {
        if(res.length() + 1 <= n)
        {
            res += s[pos][j];
            if(i == n) cout << res << endl;
            else Try(i + 1);
            res.erase(res.end() - 1);
        }
    }
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a;
    n = a.length();
    for(int i = 0; i < a.length(); i++)
    {
        x[i + 1] = a[i] - '0';
    }
    Try(1);
}
