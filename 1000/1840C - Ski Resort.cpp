#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long n, k , q; cin >> n >> k >> q;
	vector <long long> a(n);
	for (auto &x: a) cin >> x;

	long long l = 0; long long ans = 0;
	for (int i = 0; i < n ;i++) {
		if (a[i] <= q) {
			l++;
		}
		else {
			if (l >= k) {
				ans += (l - k + 1) * (l - k + 2) / 2;
			}
			l = 0;
		}
	}
	if (l >= k) {
		ans += (l - k + 1) * (l - k + 2) / 2;
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