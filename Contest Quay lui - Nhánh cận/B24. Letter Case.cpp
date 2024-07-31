#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n, k;
string s;
set<string> res;
string tmp;
void Try(int i)
{
    for(char x : {tolower(s[i]), toupper(s[i])})
    {
        tmp += x;
        if(tmp.length() == s.length()) res.insert(tmp);
        else Try(i + 1);
        tmp.pop_back();
    }
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
   cin >> s;
   Try(0);
   for(auto it : res)
    cout << it << endl;
}