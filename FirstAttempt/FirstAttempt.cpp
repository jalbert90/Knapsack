#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long

using namespace std;

void solve() {
	int n;
	ll int W, C = 0;
	cin >> n >> W;

	vector<int> knap;
	vector<pair<int, int>> w(n);

	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		w[i] = make_pair(input, i + 1);
	}

	sort(w.begin(), w.end(), [](pair<int, int>& a, pair<int, int>& b) {return a.first > b.first;});

	for (int i = 0; i < n; i++) {
		if (w[i].first <= W) {
			C += w[i].first;
			knap.push_back(w[i].second);
		}

		if (C >= (W - 1) / 2 + 1) break;
	}

	int m = knap.size();

	if (m == 0) {
		cout << -1;
		return;
	}

	cout << m << endl;

	for (auto el : knap) {
		cout << el << " ";
	}
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		solve();
		cout << endl;
	}
}