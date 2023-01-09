#include <iostream>
#include <map>

using namespace std;

using mii = map<int, int>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto m = mii{};
	auto s = int{ 0 };
	for (auto i = 0; i < 10; ++i) {
		int x;
		cin >> x;

		m[x] += 1;
		s += x;
	}

	cout << s / 10 << '\n';
	auto mx = int{ 0 };
	auto cmx = int{ 0 };
	for (const auto& kv : m) {
		if (cmx < kv.second) {
			mx = kv.first;
			cmx = kv.second;
		}
	}

	cout << mx << '\n';

	return 0;
}