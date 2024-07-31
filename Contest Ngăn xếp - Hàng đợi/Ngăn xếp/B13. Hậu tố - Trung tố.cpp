#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    string s; cin >> s;
    stack<string> st;

    for(int i = 0; i < s.length(); i++)
    {
        if(isalpha(s[i])) st.push(string(1, s[i]));
        else
        {
            string t1 = st.top(); st.pop();
            string t2 = st.top(); st.pop();
            st.push('(' + t2 + s[i] + t1 + ')');
        }
    }
    cout << st.top();
}