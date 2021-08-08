#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	set<string> N;
	set<string> M;
	vector<string> R;
	string temp;
	
	cin >> n >> m;
		
	for (int i = 0;i < n;i++) {
		cin >> temp;
		N.insert(temp);
	}
	for (int i = 0;i < m;i++) {
		cin >> temp;
		M.insert(temp);
	}

	set_intersection(N.begin(), N.end(),M.begin(), M.end(), back_inserter(R));
	
	cout << R.size() << endl;
	for (string item : R) {
		cout << item << endl;
	}
}
