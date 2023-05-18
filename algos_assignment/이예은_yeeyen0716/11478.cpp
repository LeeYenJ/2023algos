#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio;
	cin.tie(NULL);

	string s;
	cin >> s;

	set<string> set;

	string str = "";
	for (int i = 0;i < s.size();i++) { //스트링 사이즈 0부터 
		for (int j = i;j < s.size();j++) { // 스트링 사이즈, 
			str += s[j];
			set.insert(str);
		}
		str = "";
	}
	cout << set.size();
}
