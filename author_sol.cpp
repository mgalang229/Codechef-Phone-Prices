#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> p(n);
		for (int i = 0; i < n; i++) {
			cin >> p[i];
		}
		// check if the current value is STRICLY smaller than the past 5 or LESS values
		// if yes, then increment 'cnt'
		int ans = 0;
		for (int i = 0; i < n; i++) {
			bool ok = true;
			for (int j = max(i - 5, 0); j < i; j++) {
				ok &= (p[i] < p[j]);
			}
			ans += ok;
		}
		cout << ans << '\n';
	}
	return 0;
}
