#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, t;
	cin >> n >> t;
	vector<int> a(n);
	for (int i = 0; i < n - 1; i++) {
		cin >> a[i];
	}
	a[n - 1] = 0; // don't forget to initialize the (n - 1)-th cell
	bool checker = false;
	for (int i = 0; i < n;) {
		if (i == t - 1) {
			// simply check if (t - 1) is reachable
			checker = true;
			break;
		} else if (i < t - 1) {
			// next index = current index + distance to be traveled
			i += a[i];
		} else {
			// if the current index is greater than (t - 1), then it is impossible
			break;
		}
	}
	cout << (checker ? "YES" : "NO") << '\n';
	return 0;
}
