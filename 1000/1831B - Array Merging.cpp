#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	vector <int> a(n); vector <int> b(n);
	map <int, int> freqa; map <int, int> freqb;
	for (auto &x: a) cin >> x;
	for (auto &x: b) cin >> x;
	int cnt = 1;
	freqa[a[0]]++;
	int ans = 0;
	for (int i = 1; i < n; i++) {
		if (a[i] == a[i - 1]) cnt++;
		else {
			freqa[a[i - 1]] = max(freqa[a[i - 1]], cnt);
			cnt = 1;
			ans = max(ans, freqa[a[i - 1]]);
		}
	}
	freqa[a[n - 1]] = max(freqa[a[n - 1]], cnt);
	ans = max(freqa[a[n - 1]], ans);

	cnt = 1;
	freqb[b[0]]++;
	for (int i = 1; i < n; i++) {
		if (b[i] == b[i -1]) cnt++;
		else {
			freqb[b[i - 1]] = max(freqb[b[i - 1]], cnt);
			cnt = 1;
			ans = max(ans, freqb[b[i - 1]]);
		}
	}
	freqb[b[n - 1]] = max(freqb[b[n - 1]], cnt);
	ans = max(freqb[b[n - 1]], ans);
	for (auto &x:freqa) {
		ans = max(ans, x.second + freqb[x.first]);
	}
	cout << ans << endl;
}
int main() {
	int tc = 1;
	cin >> tc;
	for (int i = 1; i <= tc; i++) {
		// cout << "TEST CASE #" << i << ":\n";
		solve();
	}
}