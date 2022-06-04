#include <iostream>
#include <map>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto data = map<int, int>{};
	while (0 < (n--)) {
		int x;
		cin >> x;

		data[x] += 1;
	}

	int v;
	cin >> v;
	cout << data[v];

	return 0;
}