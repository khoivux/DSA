#include <bits/stdc++.h>
#define ll long long
/*
Liệt kê tất cả các dãy con có từ 2 phần tử trở lên của dãy a[] thỏa mãn tính chất
tăng dần
*/
using namespace std;
int n;
int a[199];
int x[199] = {0};
vector<string> v;

void Try(int i, int pos)
{
     for(int j = pos; j <= n; j++)
    {
        if(a[j] > x[i - 1])
        {
            x[i] = a[j];
            if(i >= 2)
            {
                string s = "";
                for(int k = 1; k <= i; k++)
                    s += to_string(x[k]) + " ";

                v.push_back(s);
            }
            Try(i + 1, j + 1);
        }
    }
}

main()
{
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    Try(1, 1);
    sort(v.begin(), v.end());
    for(auto it : v) cout << it << endl;
}