#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long

using namespace std;

void solve() {
	int n;
	ll int W;
	cin >> n >> W;

	vector<int> w(n);

	for (int i = 0; i < n; i++) {
		cin >> w[i];
	}

	sort(w.begin(), w.end());
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		solve();
	}
}