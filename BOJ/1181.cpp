#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int cmp(string a, string b) {
	if (a.length() == b.length()) {
		return a < b;
	}
	else {
		return a.length() < b.length();
	}
}

int main()
{
	int c;
	cin >> c;

	string *arr = new string[c];
	for (int i = 0;i < c;i++) {
		cin >> arr[i];
	}

	sort(arr, arr + c, cmp);
	cout << arr[0] << endl;
	for (int i = 1;i < c;i++) {
		if (arr[i] != arr[i - 1]) {
			cout << arr[i] << endl;
		}
	}
}
