#include <bits/stdc++.h>
#define ll long long
/*
 Hãy tìm cách liệt kê tất cả các xâu có K ký
tự khác nhau được tạo ra bởi các chữ cái tính từ ‘A’ đến ký tự c. 
*/
using namespace std;

int n, k;
char c;
int a[1999];

void start()
{
	for(int i = 1; i <= k; i++) 
    {
        a[i] = 1;
        cout << char(a[i] - 1 + 'A') << " ";
    }
	cout << endl;
}
void result()
{
    for(int i = 1; i <= k; i++)
    {
        cout << char(a[i] - 1 + 'A') << " ";
    }
    cout << endl;
}
bool isFinal()
{
	for(int i = 1; i <= k; i++)
	{
		if(a[i] != n) return false;
	}
	return true;
}
void nextGen()
{
	int i = k;
	while(i >= 1 && a[i] == n)
	{
		i--;
	}
	if(i >= 1)
	{
		a[i]++;
		for(int j = i + 1; j <= k; j++)
			a[j] = 1;
	}
}
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> c >> k;
	n = c - 'A' + 1;

	start();
	while(!isFinal())
	{
		nextGen();
		result();
	}
}

