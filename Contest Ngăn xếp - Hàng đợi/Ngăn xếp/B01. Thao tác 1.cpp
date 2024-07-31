#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    stack<int> st;
    int q; cin >> q;
    cin.ignore();
    while(q--)
    {
        string s;
        getline(cin, s);
        
        if(s == "pop" && !st.empty()) st.pop();
        else if(s[0] == 'p' && s[1] != 'o')
        {
            int x = 0; 
            for(int i = 5; i < s.size(); i++)
            {
                x = x * 10 + (s[i] - '0');
            }
            st.push(x);
        }
        else if(s == "show")
        {
            if(st.empty())
            {
                cout << "EMPTY" << endl;
                continue;
            }
            stack<int> sta;
            while(!st.empty())
            {
                sta.push(st.top());
                st.pop();
            }
            while(!sta.empty())
            {
                cout << sta.top() << " ";
                st.push(sta.top());
                sta.pop();
            }
            cout << endl;
        }
    }
}