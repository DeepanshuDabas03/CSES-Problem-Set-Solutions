#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
const ll mod = 1e9 + 7;
int dp[1000001];
int rec(int n){
	if(n == 0) return 1;
	if(n < 0) return 0;
	if(dp[n] != -1) return dp[n];
	int ans = 0;
	for(int i = 1; i <= 6; i++){
		ans += rec(n - i);
		ans %= mod;
	}
	return dp[n] = ans;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	ll n;
	cin >> n;
	memset(dp, -1, sizeof(dp));
	cout << rec(n) << endl;	
 
	return 0;
}
