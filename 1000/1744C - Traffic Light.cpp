#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; char c; cin >> n >> c;
	string s; cin >> s;
	s += s;
	int cnt;
	int ans = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == c) {
			cnt = 0;
			while (s[i] != 'g' && i < s.size()) {
				cnt++;
				i++;
			}
			ans = max(ans, cnt);
		}
	}
	cout << ans << endl;
}
int main() {
	int tc = 1;
	cin >> tc;
	for (int i = 1; i <= tc; i++) {
		// cout << "TEST CASE #" << i << ":\n"; Looks good!
		solve();
	}
}
