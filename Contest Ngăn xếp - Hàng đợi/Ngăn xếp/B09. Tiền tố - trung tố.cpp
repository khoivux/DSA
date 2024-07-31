#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

string s;
stack<string> st;

void solve()
{
    for(int i = s.length() - 1; i >= 0; i--)
    {
        if(isalpha(s[i])) 
            st.push(string(1, s[i]));
        else
        {
            string t1 = st.top(); st.pop();
            string t2 = st.top(); st.pop();
            st.push('(' + t1 + s[i] + t2 + ')'); 
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