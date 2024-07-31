#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n, k;
vector<vector<int>> v;
vector<int> tmp;
vector<int> prime;
int used[10];
int sum = 0;

bool isPrime(int a)
{
    for(int i = 2; i <= sqrt(a); i++)
    {
        if(a % i == 0) return false;
    }
    return a > 1;
}

void addPrime()
{
    for(int i = 2; i <= 500; i++)
    {
        if(isPrime(i)) prime.push_back(i);
    }
}

void Try(int i)
{
    for(int j = i; j <= prime.size(); j++)
    {
        sum += prime[j];
        tmp.push_back(prime[j]);
        if(sum == n && tmp.size() == k)
        {
            v.push_back(tmp);
        }
        else if(sum < n && tmp.size() < k)
            Try(j + 1);
        sum -= prime[j];
        tmp.pop_back();
    }
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n >> k;
    addPrime();
    Try(0);
    for(int i = 0; i < v.size(); i++)
    {
        for(auto it : v[i])
            cout << it << " ";
        cout << endl;
    }
}