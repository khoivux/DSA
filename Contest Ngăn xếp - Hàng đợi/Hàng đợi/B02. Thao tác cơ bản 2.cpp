#include <bits/stdc++.h>
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
	queue<int> q;
	cin.ignore();
	while(t--)
	{
		getline(cin, s);

		if(s[1] == 'U')
		{
			int x = 0;
			for(int i = 5; i < s.length(); i++)
				x = x * 10 + (s[i] - '0');
			q.push(x);
		}
		else if(s[1] == 'R')
		{
			if(q.empty()) cout << "NONE";
			else cout << q.front();
			cout << endl;
		}
		else
		{
			q.pop();
		}
	}
}