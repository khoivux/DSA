#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    string s;
    stack<string> st;

    while(cin >> s)
        st.push(s);
    
    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}