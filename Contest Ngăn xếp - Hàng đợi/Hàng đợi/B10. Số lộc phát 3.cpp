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
	while(t--)
	{
		int n; cin >> n;
		
		queue<string> q;
		vector<string> v;
		q.push("6");
		q.push("8");
		while(q.front().length() <= n)
		{
			string t = q.front();
			v.push_back(t);
			q.pop();
			q.push(t + '6');
			q.push(t + '8');
		}
		cout << v.size() << endl;
		reverse(v.begin(), v.end());
		for(auto it : v) cout << it << " ";
			cout << endl;
	}
}