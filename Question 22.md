## Paint the wall

[Question Link](https://www.hackerearth.com/problem/algorithm/stepping-stones-3/)

## Solution

```c++
#include <bits/stdc++.h>
#define RED 0
#define WHITE 1
#define BLUE 2

using namespace std;

long mod = 1e9+7;

long dp[1000][4];

long solve(int n, int c){
	if(dp[n][c] != -1) return dp[n][c];

	long ans = 0;
	if(n==0) return 1;
	if(n==1) return 1;

	if(c==WHITE){
		ans = (ans + solve(n-1, RED)) % mod;
		ans = (ans + solve(n-2, RED)) % mod;
	} else {
		ans = (ans + solve(n-1, WHITE)) % mod;
		ans = (ans + solve(n-2, WHITE)) % mod;
	}
	dp[n][c] = ans;
	return ans;
}

int main() {
	int t;
	cin >> t;	
	while(t--){
		memset(dp, -1, sizeof dp);
		int n;
		cin >> n;
		long ans = (solve(n-1, RED) + solve(n-1, WHITE)) % mod;
		cout << ans << endl;
	}
	return 0;
}
```
