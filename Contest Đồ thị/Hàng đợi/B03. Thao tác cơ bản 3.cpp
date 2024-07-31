#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define ii pair<int, int>
using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    string s;
    deque<int> q;
    cin.ignore();
    while(t--)
    {
        getline(cin, s);

        if(s == "POPFRONT") 
            q.pop_front();
        else if(s == "POPBACK") 
            q.pop_back();
        else if(s[4] == 'F')
        {
            int x = 0;
            for(int i = 10; i < s.length(); i++)
                x = x * 10 + (s[i] - '0');
            q.push_front(x);
        }
        else if(s[4] == 'B')
        {
            int x = 0;
            for(int i = 9; i < s.length(); i++)
                x = x * 10 + (s[i] - '0');
            q.push_back(x);
        }
        else if(s == "PRINTFRONT")
        {
            if(q.empty()) cout << "NONE";
            else cout << q.front();
            cout << endl;
        }
        else
        {
            if(q.empty()) cout << "NONE";
            else cout << q.back();
            cout << endl;
        }
    }
}