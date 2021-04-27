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
		// create a set (for storing unique elements)
		set<int> s;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			// insert the elements in the set
			s.insert(x);
		}
		// print the size of the set
		cout << (int) s.size() << '\n';
	}
	return 0;
}
