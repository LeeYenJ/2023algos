#include<iostream>
#include<vector>
#include<algorithm>
#include <map>
using namespace std;

int main() {
	int n, m;
	map<string, bool>map;
	vector<string>con;
	int tot=0;
	cin >> n >> m;
	for (int i = 0; i < n;i++) {
		string name;
		cin >> name;
		map.insert({ name, true });
	}

	for (int i = 0;i < m;i++) {
		string name;
		cin >> name;
		if (map[name]) {
			con.push_back(name);
			tot++;
		}
	}
	sort(con.begin(), con.end());
	cout << tot<<'\n';
	for (int i = 0;i < con.size();i++) {
		cout << con[i] << '\n';
	}
	return 0;
}
