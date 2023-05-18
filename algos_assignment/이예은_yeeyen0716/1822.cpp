#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main() {
	ios_base::sync_with_stdio();
	cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	set<int>set;
	for (int i = 0;i < n;i++) {
		int num;
		cin >> num;
		set.insert(num);
	}

	for (int i = 0;i < m;i++) {
		int num;
		cin >> num;
		if (set.end() == set.find(num)) // 없으면
			continue;
		else set.erase(num);
	}

	cout << set.size() << '\n';
	for (auto num:set) {
		cout << num << " ";
	}
	cout << '\n';
}
