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
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			bool checker = true;
			for (int j = i - 1; j >= max(0, i - 5); j--) {
				if (p[i] >= p[j]) {
					checker = false;
					break;
				}
			}
			if (checker) {
				cnt++;
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}
