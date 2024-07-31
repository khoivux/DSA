#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    stack<char> st;
    int res = 0;
    string s; cin >> s;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '(') st.push(s[i]);
        if(s[i] == ')')
        {
            if(!st.empty()) st.pop();
            else res++;
        }
    }
    while(!st.empty())
    {
        res++;
        st.pop();
    }
    cout << res << endl;
}