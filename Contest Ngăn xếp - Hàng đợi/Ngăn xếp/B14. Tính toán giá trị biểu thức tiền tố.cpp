#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

string s;
stack<int> st;

void solve()
{
    for(int i = s.length() - 1; i >= 0; i--)
    {
        if(isdigit(s[i])) st.push(s[i] - '0');
        else
        {
            int t1 = st.top(); st.pop();
            int t2 = st.top(); st.pop();
            if(s[i] == '+') st.push(t1 + t2);
            if(s[i] == '-') st.push(t1 - t2);
            if(s[i] == '/') st.push(t1 / t2);
            if(s[i] == '*') st.push(t1 * t2);
        }
    }
    cout << st.top();
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> s;
    solve();
}