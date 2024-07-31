#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n; cin >> n;
	int a[n];
	int res[n];
	stack<int> st;
	for(int i = 0; i < n; i++) cin >> a[i];

	for(int i = 0; i < n; i++)
	{
		while(!st.empty() && a[i] > a[st.top()])
		{
			res[st.top()] = a[i];
			st.pop();
		}
		st.push(i);
	}

	while(!st.empty())
	{
		res[st.top()] = -1;
		st.pop();
	}
	for(int i = 0; i < n; i++) cout << res[i] << " ";
}