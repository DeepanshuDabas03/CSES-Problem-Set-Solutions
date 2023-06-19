#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
const ll mod = 1e9 + 7;
int dp[1000001];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n;
	cin >> n;
	dp[0] = 1;
	for (int j = 1; j <= n; j++)
	{
		for (int i = 1; i <= 6; i++)
		{
			if (j - i >= 0)
			{
					dp[j] = (dp[j] + dp[j - i]) % mod;
			}
		}
	}
	cout << dp[n] << endl;
	return 0;
}
