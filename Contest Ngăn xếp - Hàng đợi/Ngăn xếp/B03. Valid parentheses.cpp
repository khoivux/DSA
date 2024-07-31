#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

bool check(string s)
{
     stack<char> st;
     for(int i = 0; i < s.length(); i++)
     {
          if(s[i] == '(' || s[i] == '{' || s[i] == '[')
               st.push(s[i]);
          else
          {
               if(st.empty()) return false;
               if(s[i] == ')' && st.top() != '(') return false;
               if(s[i] == '}' && st.top() != '{') return false; 
               if(s[i] == ']' && st.top() != '[') return false;  
               st.pop();
          } 
     }
     if(st.empty()) return true;
     else return false;
}

main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
     cout.tie(nullptr);
     
     string s;
     cin >> s;
     if(check(s)) cout << "YES";
     else cout << "NO";
     cout << endl;
}