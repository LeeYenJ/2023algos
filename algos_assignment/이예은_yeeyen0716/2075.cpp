#include <iostream>
#include <queue> 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	priority_queue<int, vector<int>, greater<int>>q;

	int N;
	cin >> N;
	for (int i = 0;i < N*N;i++) {
		int num;
		cin >> num;
		q.push(num);
		if (q.size() > N) q.pop();
	}
	
	cout<<q.top();
	return 0;
}
