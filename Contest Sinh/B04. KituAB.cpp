#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n;
int a[1999] = {0};

void result()
{
	for(int i = 1; i <= n; i++)
	{
		if(a[i]) cout << "A";
		else cout << "B";
	}
	cout << endl;
}
bool isFinal()
{
	for(int i = 1; i <= n; i++)
	{
		if(!a[i]) return false;
	}
	return true;
}
void nextGen()
{
	int i = n; 
	while(i >= 1 && a[i] == 1)
	{
		a[i] = 0;
		i--;
	}
	if(i > 0) a[i] = 1;
}
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> n;
	while(!isFinal())
	{
		result();
		nextGen();
	}
	result();
}

