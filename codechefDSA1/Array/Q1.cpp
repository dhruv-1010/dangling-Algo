#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define op ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long  ll;
typedef long l;
void solve(){
int n, m, k;
	cin >> n >> m >> k;
	int a[n][k], i, j;
	int q[n];
	int ans = 0;
	for (i = 0; i < n; i++) {
		int sum = 0;
		for (j = 0; j < k; j++) {
			cin >> a[i][j];
			sum += a[i][j];
		}
		cin >> q[i];
		if (q[i] <= 10 && sum >= m)
			ans++;
	}
	cout << ans << endl;  
}
int main() {
    op;
	// your code goes here
	   solve();
	return 0;
}
