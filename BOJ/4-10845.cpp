//queue : FIFO(First In First Out)
//endl보다 "\n"이 빠르다.

#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	string temp;
	queue<int> q;

	cin >> n;

	for (int i = 0;i < n;i++) {
		cin >> temp;
		if (temp == "push") {
			cin >> m;
			q.push(m);
		}
		else if (temp == "empty") {
			cout << q.empty() << "\n";
		}
		else if (temp == "size") {
			cout << q.size() << "\n";
		}
		else if (q.empty()) {
			cout << -1 << "\n";
		}
		else if (temp == "pop") {
			cout << q.front() << "\n";
			q.pop();
		}
		else if (temp == "front") {
			cout << q.front() << "\n";
		}
		else {
			cout << q.back() << "\n";
		}
	}
}
