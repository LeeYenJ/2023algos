#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<map>
using namespace std;

int main() {
	ios_base::sync_with_stdio;
	cin.tie(NULL);
	int n;
	cin >> n;
	map<string, int, greater<>>m;
	for (int i = 0;i < n;i++) {
		string name, state;
		cin >> name >> state;
		if (state == "leave") m[name] = 0;
		else m[name] = 1;
	}
	map<string, int > ::iterator it;
	for (it = m.begin(); it != m.end(); ++it) {
		if (it->second == 1) {
			cout << it->first << '\n';
		}
	}
	return 0;

}

